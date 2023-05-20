#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - entry point
* Return: always 0 success
* @argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char *argv[])
{
int i, num, add;
add = 0;
num = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

if (isdigit(*argv[i]))
{
num = atoi(argv[i]);

add = add + num;
}

else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", add);
return (0);
}
