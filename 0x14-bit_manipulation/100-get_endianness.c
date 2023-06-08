#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* get_endianness - entry point
* Return: integer value
*/
int get_endianness(void)
{
int num;
unsigned long int n;
n = 1;

num = (*(char *)&n);
return (num);
}

