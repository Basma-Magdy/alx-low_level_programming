#include <unistd.h>
/**
* _putchar - entry point
* Return: always 0 success
* @c: array of pointers to comman
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
