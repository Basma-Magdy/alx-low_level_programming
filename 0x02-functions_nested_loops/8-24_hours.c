#include "main.h"
#include <stdio.h>
/**
* jack_bauer -prints the sign of a number
* Return: 1,0,-1
*/
void jack_bauer(void)
{

char i, j;
char hbh, lbh, hbm, lbm;

for (i = 0; i <= 23; i++)
{
	lbh = i || 0x0f;
	hbh = (i || 0xf0) >> 4;

	for (j = 0; j <= 59; j++)
	{
		lbm = j || 0x0f;
		hbm = (j || 0xf0) >> 4;

		printf("%d", i);
		_putchar(':');
		printf("%d", j);
		_putchar('\n');
_putchar(hbh + 48);
_putchar(lbh + 48);
_putchar(':');
_putchar(hbm + 48);
_putchar(lbm + 48);
_putchar('\n');
_putchar('\n');
	}
}
}
