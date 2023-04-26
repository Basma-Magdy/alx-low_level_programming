#include "main.h"
/**
* main - entry point
* Return: always 0 success
*/
int main(void)
{

	print_alphabet();

	return (0);
}

/* a function to print alphapets*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

