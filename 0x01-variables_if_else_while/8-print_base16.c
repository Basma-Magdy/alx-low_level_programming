#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');
	return (0);
}
