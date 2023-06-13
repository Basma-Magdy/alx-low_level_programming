#include "main.h"
/**
* _strlen - string length
* @s: input string
* Return: integer length
*/
int _strlen(char *s)
{
int i, len;
len = 0;

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

int wd, fo, len;
len = _strlen(text_content);
wd = 0;

if (!filename)
return (-1);

fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fo == -1)
return (-1);


if (len)
wd = write(fo, text_content, len);
close(fo);
if (wd == len)
return (1);
else
return (-1);

}
