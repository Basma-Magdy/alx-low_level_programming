#include <stdio.h>

/**
* print_name - entry point
* Return: always 0 success
* @name: number of commands
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
if (f && name)
(*f)(name);

}
