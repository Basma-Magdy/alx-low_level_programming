#include <unistd.h>
/**
* _putchar -A ffunction receives a charater to write it
* Return: an integer
* @c: the input charater to be written
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
