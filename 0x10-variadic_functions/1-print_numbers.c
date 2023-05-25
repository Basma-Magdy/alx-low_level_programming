#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - entry point
* Return: always 0 success
* @separator: number of commands
* @n: array of pointers to commands
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;

if (n > 0)
{
va_start(ptr, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));

if (separator && (i < (n - 1)))
printf("%s", separator);

}
}

printf("\n");
}
