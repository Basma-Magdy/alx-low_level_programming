#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	char ch, ch2;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
