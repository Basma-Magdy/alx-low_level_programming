#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* flip_bits - entry point
* Return: integer value
* @n: binary input
* @m: of bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count;
unsigned long int current;

count = 0;
current = n ^ m;

while (current)
{
	if (current & 1ul)
		count++;

	current = current >> 1;
}

return (count);
}
