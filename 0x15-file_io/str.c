#include "main.h"

/**
* _strncmp - comare
* @str1: s1 data
* @str2: s2 data
* @no: bytes to compare
* Return: integer
*/
int _strncmp(const char *str1, const char *str2, size_t no) 
{
for ( ; no && *str1 && *str2; --no, ++str1, ++str2)
{
if (*str1 != *str2)
return (*str1 - *str2);
}
if (no)
{
if (*str1)
return (1);
if (*str2)
return (-1);
}
return (0);
}
