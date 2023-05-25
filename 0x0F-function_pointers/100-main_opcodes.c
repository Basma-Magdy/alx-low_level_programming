#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Return: always 0 success
* @argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char *argv[])
{
int num;
char *ptr;
ptr = (char *)main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num = atoi(argv[1]);

if (num < 0)
{
printf("Error\n");
exit(2);
}

while (num)
{
printf("%02hhx%s", *ptr++, " ");

num --;
}
printf("\n");

return (0);
}

