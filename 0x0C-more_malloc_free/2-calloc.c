#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - entry point
* Return: always 0 success
* @nmemb: number of commands
* @size: array of pointers to commands
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *ptr;
ptr = malloc(nmemb * size);

if (nmemb == 0 || size == 0 || ptr == NULL)
return (NULL);

return (ptr);
}
