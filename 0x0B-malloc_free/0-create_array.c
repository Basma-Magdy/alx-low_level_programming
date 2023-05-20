#include <stdio.h>
#include <stdlib.h>
/**
* create_array - entry point
* Return: always 0 success
* @size: number of commands
* @c: array of pointers to comman
*/
char *create_array(unsigned int size, char c)
{
char *arr;
int i;

if (size <= 0)
return (NULL);

arr = malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0 ; i < (int)size ; i++)
{
arr[i] = c;
}
return (arr);
}

