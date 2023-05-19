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
char *p;
errno = 0;

if (argc != 3)
{
printf ("error \n");
exit(98);
}

num1 = strtol(argv[1], &p, 10);
num2 = strtol(argv[2], &p, 10);

if (*p != '\0' || errno != 0)
{
printf ("error \n");
exit(98);
}
else
{
mul = num1 * num2;
printf ("%d\n", mul);
}
return (0);

}
