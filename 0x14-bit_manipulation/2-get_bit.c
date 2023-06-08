#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* get_bit - entry point
* Return: integer value
* @n: binary input
* @index: of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int num;

if (index >= (sizeof(n) * 8))
return (-1);

num = (n >> index) & 1;
return (num);
}
