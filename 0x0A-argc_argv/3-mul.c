#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Return: always 0 success
*@argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char const *argv[])
{
int mul, num1, num2;

if (argc != 3)
{
printf("Error \n");
return (1);
}

else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
}
return (0);
}

