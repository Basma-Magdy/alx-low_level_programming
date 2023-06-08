#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_binary - entry point
* Return: nothing
* @n: binary input
*/
void print_binary(unsigned long int n)
{
int bit, print;

bit = sizeof(n) * 8;
print = 0;

while (bit)
{
	if (n & 1L << --bit)
	{
		_putchar('1');
		print++;
	}
	else if (print)
		_putchar('0');
}

if (!print)
_putchar('0');
}
