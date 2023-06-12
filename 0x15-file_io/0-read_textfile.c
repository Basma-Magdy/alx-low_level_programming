#include "main.h"
/**
* read_textfile - entry function
* @filename: input file
* @letters: data to be read
* Return: Number of read bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fdata;
ssize_t nobytes;
char buffer[1024 * 8];

if (!filename || !letters)
return (0);

fdata = open(filename, O_RDONLY);

if (fdata == -1)
return (0);

nobytes = read(fdata, &buffer[0], letters);
nobytes = write(STDOUT_FILENO, &buffer[0], nobytes);

if (nobytes == -1)
return (0);

close(fdata);
return (nobytes);

}
