#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - entry point
* Return: always 0 success
* @b: integer
*/
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = (int *)malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
