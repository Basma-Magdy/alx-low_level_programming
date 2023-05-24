#include <stdio.h>
/**
* int_index - entry point
* Return: always 0 success
* @array: number of commands
* @size: number of commands
* @cmp: number of commands
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, index;

if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size ; i++)
{
index = (*cmp)(array[i]);

if (index != 0)
return (i);
}

return (-1);

}
