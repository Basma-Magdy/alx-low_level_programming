#include "main.h"
/**
* print_last_digit - prints the sign of a number
* Return: 1,0,-1
* @n: character of ascii code
*/

int print_last_digit(int n)
{

int ld;

ld = n % 10;

if (ld < 0)
{
ld = ld * -1;
}
_putchar(ld + 48);
return (ld);
}

