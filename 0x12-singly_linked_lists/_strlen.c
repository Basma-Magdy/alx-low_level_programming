#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* _strlen - string length
* @s: input string
* Return: integer length
*/
unsigned int _strlen(const char *s)
{
unsigned int i, len;
len = 0;

for (i = 0; s[i] != '\0'; i++)
{
len ++;
}
return (len);
}

