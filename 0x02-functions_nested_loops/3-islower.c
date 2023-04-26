#include “main.h”
/**
* int _islower - checks for lowercase character
* Return: Returns 1 if c is lowercase, Returns 0 otherwise
*/
int _islower(int c)
{
	int i;

	for (i = 97, i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
