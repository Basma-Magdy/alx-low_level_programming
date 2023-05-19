#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - entry point
* Return: always 0 success
* @ptr: number of commands
* @new_size: array of pointers to commands
* @old_size: size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
ptr = malloc(new_size);
return(ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr = realloc(ptr, new_size);

return (ptr);
free(ptr);
}
