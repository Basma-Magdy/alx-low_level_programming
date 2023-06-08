#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* set_bit - entry point
* Return: integer value
* @n: binary input
* @index: of bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= (sizeof(n) * 8))
return (-1);

*n = ((1L << index) | *n);
return (1);
}
