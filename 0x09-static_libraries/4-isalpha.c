#include "main.h"
/**
* _isalpha - checks for alphabetic character
* Return: Returns 1 if c is a letter, lowercase or uppercase
*@c: the character in ascii code
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

