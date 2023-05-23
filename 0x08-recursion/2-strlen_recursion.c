#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - entry point
* Return: always 0 success
* @s: number of commands
*/

int _strlen_recursion(char *s)
{
int len;
len = 0;
if (*s > '\0')
len = len + _strlen_recursion(s + 1) + 1;

return (len);
}


