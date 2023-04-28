#include "main.h"
/**
* print_square -prints the sign of a number
* Return: 1,0,-1
* @size: character of ascii code
*/
void print_square(int size)
{
int col, row;

for (col = 0; col < size; col++)
{
for (row = 0; row < size; row++)
{
_putchar('#');
}
_putchar('\n');
}

if (size == 0)
_putchar('\n');
}
