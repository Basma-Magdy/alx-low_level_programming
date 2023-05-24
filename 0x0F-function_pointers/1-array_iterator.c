#include <stdio.h>
/**
* array_iterator - entry point
* Return: always 0 success
* @array: number of commands
* @size: number of commands
* @action: number of commands
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && size > 0 && action != NULL)
{
	for (i = 0; i < size; i++)
	(*action)(array[i]);
}


}
