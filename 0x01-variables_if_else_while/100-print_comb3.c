#include <stdio.h>
/**
* main - entry point
* Return: always 0 success
*/
int main(void)
{
	int i, j;

	for (i = 48 + 0 ; i <= 48 + 9; i++)
	{
		for (j = 49 + i; j <= 48 + 9; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}


return (0);
}

