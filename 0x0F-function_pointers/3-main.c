#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - entry point
* Return: always 0 success
* @argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*calc)(int, int);

if (argc != 4)
{
printf("Error arg\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/*
if (*argv[2][0] != "+" || argv[2][0] != '-' || argv[2][0] != '*' || argv[2][0] != '/' || argv[2][0] != '%') 
{
printf("Error op\n");
exit(99);
}
*/
if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
{
printf("Error div0\n");
exit(100);
}

calc = get_op_func(argv[2]);
if (calc == NULL)
{
printf("Error op\n");
exit(99);
}

else
{
result = (*calc)(num1, num2);

printf("%d\n", result);
}

return (0);
}

