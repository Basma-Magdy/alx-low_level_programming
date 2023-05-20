#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - entry point
* Return: always 0 success
* @str: number of commands
*/
char *_strdup(char *str)
{
int i, size;
char *str_new;

size = 1;

if (str == NULL)
return (NULL);

for (i = 0; i < (int)strlen(str); i++)
size++;

str_new = malloc(size *sizeof(char));

if (str_new == NULL)
return (NULL);

str_new = str;

return (str_new);
}
