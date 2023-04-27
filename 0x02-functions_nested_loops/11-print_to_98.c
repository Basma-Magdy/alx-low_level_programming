#include "main.h"
#include <stdio.h>
/**
* print_to_98 -prints the sign of a number
* Return: 1,0,-1
* @n: character of ascii code
*/
void print_to_98(int n)
{
int i;

for (i = n; i <= 98; i++)
{
	printf("%d ,", i);
}
}
