#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - entry point
* Return: always 0 success
* @s1: number of commands
* @s2: array of pointers to comman
*/
char *str_concat(char *s1, char *s2)
{
int i, j, s1_len, s2_len, snew_len;
char *str_new;
s1_len =  0;
s2_len =  0;
i = 0;
while (s1[i] != '\0')
{
s1_len++;
i++;
}

i = 0;
while (s2[i] != '\0')
{
s2_len++;
i++;
}

snew_len = s1_len + s2_len + 1;

str_new = malloc((sizeof(char)) * snew_len);

if (str_new == NULL)
return (NULL);

i = 0;
while (s1[i] != '\0')
{
str_new[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
str_new[i] = s2[j];
i++;
j++;
}
str_new[snew_len] = '\0';
return (str_new);
}
