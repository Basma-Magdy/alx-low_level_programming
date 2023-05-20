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
int num1,num2, add;

if (argc == 1)
printf("0\n");

if ((!isdigit(argv[1])) || (!isdigit(argv[2])))
{
printf("Error\n");
return(1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

add = num1 + num2;

printf("%d\n", add);

return (0);
}
