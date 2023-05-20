#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
/**
* main - entry point
* Return: always 0 succe
* @argc: number of commands
* @argv: array of pointers to commands
*/

int main(int argc, char *argv[])
{
int mul, num1, num2;
char *p1, *p2;
errno = 0;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

num1 = strtol(argv[1], &p1, 10);
num2 = strtol(argv[2], &p2, 10);

if (*p1 != '\0' || *p2 != '\0' || errno != 0 || num1 < 0 || num2 < 0)
{
printf("Error\n");
exit(98);
}
else
{

mul = num1 *num2;
printf("%d\n", mul);
}
return (0);
}
