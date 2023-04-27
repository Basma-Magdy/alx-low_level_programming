#include "main.h"
/**
* _isdigit -prints the sign of a number
* Return: 1,0,-1
* @c: character of ascii code
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
