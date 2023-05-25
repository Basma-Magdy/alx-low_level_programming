#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - entry point
* Return: always 0 success
* @n: number of commands
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
int sum;
sum = 0;

if (!n)
return (0);

va_start(ptr, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);

return (sum);
}

