#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
		if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('$');
		}
	}

return (0);
}
