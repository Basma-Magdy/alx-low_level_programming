#include "main.h"

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
* Return: 0 if anything, 1 if big endian
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

