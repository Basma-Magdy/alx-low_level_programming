#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strncmp(const char *str1, const char *str2, size_t no);
void _read(int fdata, char *buffer, size_t Rbytes);
void _close(int fdata);
int elf_data(const unsigned char *buff);
void elf_version(const unsigned char *buff);
void elf_abivers(const unsigned char *buff);
void elf_magic(const unsigned char *buf);

#endif
