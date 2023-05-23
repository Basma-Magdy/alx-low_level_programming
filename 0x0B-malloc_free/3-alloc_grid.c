#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - entry point
* Return: always 0 success
* @width: number of commands
* @height: array of pointers to comman
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if ((width <=0) || (height <=0) )
return (NULL);

arr = malloc((sizeof(int *)) * height);
if (arr == NULL)
return (NULL);

for(i=0; i<height; i++)
{
	arr[i] = malloc((sizeof(int)) * width);
	while(!arr[i])
	{
		free(arr[i]);
		free(arr);
		i--;
		return (NULL);
	}

	for(j=0; j<width; j++)
	arr[i][j]=0;
}
return (arr);
}

