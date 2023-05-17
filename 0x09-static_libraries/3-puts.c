#include <stdio.h>
/**
* _puts - entry point
* Return: always 0 success
* @s: char
*/
void _puts(char *s)
{
while(*s != '\0')
{
printf("%c", *s);
s++;
}
printf("\n");
}

