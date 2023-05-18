#include <stdio.h>
/**
* malloc_checked - entry point
* Return: nothing
* @b: integer
*/
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = (int *)malloc(b);

if (ptr == NULL)
{
exit(98);
}

}

