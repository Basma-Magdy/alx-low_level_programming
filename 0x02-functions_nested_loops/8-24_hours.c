#include "main.h"
/**
* jack_bauer -prints the sign of a number
* Return: 1,0,-1
*/
void jack_bauer(void)
{

int i, j;

for (i = 0; i <= 23; i++)
{
	for (j = 0; j <= 59; j++)
	{
		_putchar(i + 48);
		_putchar(':');
		_putchar(j + 48);
		_putchar('\n');
	}
}
}
