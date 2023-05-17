#include <stdio.h>
/**
* main - entry point
* Return: always 0 success
* @argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char const *argv[] __attribute__((unused)))
{
printf("%d\n" , argc - 1);
return (0);
}

