#include "main.h"
/**
* jack_bauer -prints the sign of a number
* Return: 1,0,-1
*/
void jack_bauer(void)
{

short i, j;
short high_byte_hrs, low_byte_hrs, high_byte_mins, low_byte_mins;

for (i = 0; i <= 23; i++)
{
	low_byte_hrs = i && 0x0f;
	high_byte_hrs = (i && 0xf0) >> 4;

	for (j = 0; j <= 59; j++)
	{
		low_byte_mins = j && 0x0f;
		high_byte_mins = (j && 0xf0) >> 4;

		_putchar(high_byte_hrs + 48);
		_putchar(low_byte_hrs + 48);
		_putchar(':');
		_putchar(high_byte_mins + 48);
		_putchar(low_byte_mins + 48);
		_putchar('\n');
	}
}
}
