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
int cents, coins;
coins = 0;

if (argc == 2)
{
cents = atoi(argv[1]);
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue; }
if ((cents - 5) >= 0)
{
cents -= 5;
continue; }
if ((cents - 2) >= 0)
{
cents -= 2;
continue; }
cents--;
}}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", coins);
return (0); }
