#include <stdio.h>
/**
* main - entry point
* Return: always 0 success
*@argc: number of commands
* @argv: array of pointers to commands
*/
int main(int argc, char const *argv[])
{
int i = 0;
while(i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
