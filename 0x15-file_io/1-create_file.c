#include "main.h"
/**
* _strlen - string length
* @s: input string
* Return: integer length
*/
ssize_t _strlen(char *s)
{
int i;
ssize_t len;
len = 0;

if (!s)
return (-1);

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}


/**
*create_file - entry point
*@filename: file input
*@text_content: data file
*Return: integer
*/
int create_file(const char *filename, char *text_content)
{
int fo;
ssize_t wd, len;
len = _strlen(text_content);
wd = 0;

if (!filename)
return (-1);

fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (fo < 0)
return (-1);

if (text_content)
wd = write(fo, text_content, len);
close(fo);

if (wd < 0)
return (-1);

return (1);
}
