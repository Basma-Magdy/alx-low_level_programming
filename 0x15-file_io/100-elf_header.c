#include <elf.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _close - close a file and print error
 * @fdata: file to close
 */
void _close(int fdata)
{
	if (close(fdata) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * _strncmp - comare
 * @str1: s1 data
 * @str2: s2 data
 * @no: bytes to compare
 * Return: integer
 */
int _strncmp(const char *str1, const char *str2, size_t no) 
{
        for ( ; no && *str1 && *str2; --no, ++str1, ++str2)
        {
                if (*str1 != *str2)
                        return (*str1 - *str2);
        }
        if (no)
        {
                if (*str1)
                        return (1);
                if (*str2)
                        return (-1);
        }
        return (0);
}

/**
 * elf_magic - print elf
 * @buf: elf buffer
 */
void elf_magic(const unsigned char *buf)
{
        unsigned int i;

        if (_strncmp((const char *) buf, ELFMAG, 4))
        {
                write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
                exit(98);
        }

        printf("ELF Header:\n  Magic:   ");

        for (i = 0; i < 16; ++i)
                printf("%02x%c", buf[i], i < 15 ? ' ' : '\n');
}

/**
 * _read - read file then print error
 * @fdata: the read file
 * @buffer: to write to it
 * @Rbytes: the read bytes number
 */
void _read(int fdata, char *buffer, size_t Rbytes)
{
	if (read(fdata, buffer, Rbytes) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fdata);
	exit(98);
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
 * elf_abivers - print ABI version
 * @buff: data buffer
 */
void elf_abivers(const unsigned char *buff)
{
        printf("  %-34s %u\n", "ABI Version:", buff[EI_ABIVERSION]);
}

/**
 * elf_version - print version
 * @buff: data buffer
 */
void elf_version(const unsigned char *buff)
{
	printf("  %-34s %u", "Version:", buff[EI_VERSION]);

	if (buff[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_data - print data
 * @buff: data buffer
 * Return: 0 if anything, 1 if big endian, 
 */
int elf_data(const unsigned char *buff)
{
        printf("  %-34s ", "Data:");

        if (buff[EI_DATA] == ELFDATA2MSB)
        {
                printf("2's complement, big endian\n");
                return (1);
        }
        if (buff[EI_DATA] == ELFDATA2LSB)
        {
                printf("2's complement, little endian\n");
                return (0);
        }
        printf("Invalid data encoding\n");
        return (0);
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
                        printf("%02x", *(--buff) & 0xff);
        }

        printf("\n");
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

