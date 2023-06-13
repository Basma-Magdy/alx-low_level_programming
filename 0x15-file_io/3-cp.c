#include "main.h"
/**
*main - entry point
*@ac: argument counter
*@av: argument vector
* Return: integer, 1 or 0
*/
int main(int ac, char **av)
{
int from_file, to_file;
char buffer[1024];
ssize_t ab, cd;
from_file = 0;
to_file = 0;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from_file = open(av[1], O_RDONLY);
if (from_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", av[1]);
exit(98);
}
to_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", av[2]);
exit(99);
}
ab = read(from_file, buffer, 1024);
while (ab > 0)
{
cd = write(to_file, buffer, ab);
if (cd != ab)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", av[2]);
exit(99);
}
ab = read(from_file, buffer, 1024);
}
if (ab == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", av[1]);
exit(98);
}
from_file = close(from_file);
to_file = close(to_file);
if (from_file)
{
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", from_file);
exit(100);
}
if (to_file)
{
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", to_file);
exit(100);
}
return (1);
}
