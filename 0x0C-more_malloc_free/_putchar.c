#include <unistd.h>
/**
* _putchar - function
* Return: always 0 success
* @c: array of pointers to commands
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
