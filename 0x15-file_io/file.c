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

