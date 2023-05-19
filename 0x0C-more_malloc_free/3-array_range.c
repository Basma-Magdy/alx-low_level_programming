#include <stdio.h>
#include <stdlib.h>
/**
* array_range - entry point
* Return: always 0 success
* @min: number of commands
* @max: array of pointers to commands
*/
int *array_range(int min, int max)
{
int i, arrsize;
int *arrptr;

if (min > max)
return (NULL);

arrsize = max - min + 1;
arrptr = malloc(sizeof(int) * arrsize);

if (arrptr == 0)
return (NULL);

for (i = 0; i < arrsize; i++)
{
arrptr[i] = min;
min++;
}

return (arrptr);
}
