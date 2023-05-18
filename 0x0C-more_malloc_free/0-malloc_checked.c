#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - entry point
* @b: integer
*/
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = (int *)malloc(b);

if (ptr == 0)
exit(98);

return (ptr);
}
