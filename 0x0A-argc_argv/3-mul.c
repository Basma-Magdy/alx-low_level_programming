#include <stdio.h>

/**
* main - entry point
* Return: always 0 success
*@argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char const *argv[])
{
int mul;

if (argc != 3)
{
printf("Error \n");
return (1);
}

else
{
mul = (*argv[argc - 1] - 48) * (*argv[argc - 2] - 48);
printf("%d\n", mul);
}
return (0);
}

