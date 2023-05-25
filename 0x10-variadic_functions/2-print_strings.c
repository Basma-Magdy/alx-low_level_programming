#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - entry point
* Return: always 0 success
* @separator: number of commands
* @n: array of pointers to commands
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
char *str;

if (n > 0)
{
va_start(ptr, n);

for (i = 0; i < n; i++)
{
str = va_arg(ptr, char *);
printf("%s", str ? str : "nil");

if (separator && (i < (n - 1)))
printf("%s", separator);

}
}
va_end(ptr);
printf("\n");
}

