#include "main.h"

/**
* elf_entry - print address
* @buff: data buffer
* @bit_mode: mode if 64 or 32
* @big_end: endianess
*/
void elf_entry(const unsigned char *buff, size_t bit_mode, int big_end)
{
int add_size = bit_mode / 8;

printf("  %-34s 0x", "Entry point address:");

if (big_end)
{
while (add_size && !*(buff))
--add_size, ++buff;

printf("%x", *buff & 0xff);

while (--add_size > 0)
printf("%02x", *(++buff) & 0xff);
}
else
{
buff += add_size;

while (add_size && !*(--buff))
--add_size;

printf("%x", *buff & 0xff);

while (--add_size > 0)
printf("%02x", *(--buff) &0xff);
}

printf("\n");
}

/**
* elf_class - ELF class to print
* @buf: the ELF header
* Return: bit mode if it 64 or 32
*/
size_t elf_class(const unsigned char *buf)
{
	printf("  %-34s ", "Class:");

	if (buf[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buf[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buf[EI_CLASS]);
	return (32);
}

/**
* elf_osabi - print ABI or OS
* @buff: data buffer
*/
void elf_osabi(const unsigned char *buff)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buff[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buff[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buff[EI_OSABI]);
}

/**
* elf_type - print type
* @buff: data buffer
* @big_end: endianness
*/
void elf_type(const unsigned char *buff, int big_end)
{
	char *table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_end)
		type = buff[17] + (0x100 * buff[16]);
	else
		type = buff[16] + (0x100 * buff[17]);

	if (type < 5)
		printf("%s\n", table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
* main - Entry point
* Return: Always 0
* @argc: number of arguments
* @argv: values of args
*/
int main(int argc, const char *argv[])
{
	unsigned char buffr[18];
	unsigned int bit_mode;
	int big_end;
	int fdata;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fdata = open(argv[1], O_RDONLY);
	if (fdata == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(fdata, (char *) buffr, 18);

	elf_magic(buffr);
	bit_mode = elf_class(buffr);
	big_end = elf_data(buffr);
	elf_version(buffr);
	elf_osabi(buffr);
	elf_abivers(buffr);
	elf_type(buffr, big_end);

	lseek(fdata, 24, SEEK_SET);
	_read(fdata, (char *) buffr, bit_mode / 8);

	elf_entry(buffr, bit_mode, big_end);

	_close(fdata);

	return (0);
}
