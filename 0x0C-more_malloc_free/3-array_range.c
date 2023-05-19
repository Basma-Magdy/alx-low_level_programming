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

if (min < 0 && max >= 0)
min = 0;

else if (min < 0 && max < 0)
return (NULL);

arrsize = max - min + 1;
arrptr = malloc(arrsize *sizeof(int));

if (min > max || arrptr == 0)
return (NULL);

for (i = 0; i < arrsize; i++)
{
arrptr[i] = min;
min++;
}

return (arrptr);
}
