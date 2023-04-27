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

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
	if (i == 98)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d ,", i);
	}
}
}
else
{
for (i = n; i >= 98; i--)
{
	if (i == 98)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d ,", i);
	}

}
}
}
