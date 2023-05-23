#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* argstostr - entry point
* Return: always 0 success
* @ac: number of commands
* @av: array of pointers to comman
*/
char *argstostr(int ac, char **av)
{
char *arr;
int i, j, count, word;
word = 0;
count = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
count += strlen(av[i]);

arr = malloc(sizeof(char) * count + 1);
if (arr == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	arr[word] = av[i][j];
	word++;
	}
arr[word] = '\n';
word++;
}

arr[word] = '\0';
return (arr);
}
