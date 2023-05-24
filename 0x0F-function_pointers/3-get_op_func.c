#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* get_op_func: addition function
* Return: result ad an int valaue
* @s: integer input
*/

int (*get_op_func(char *s))(int, int)
{
int i;
i = 0;
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

while (s && (i < 6))
{
if (s == ops[i].op)
{
	return (ops[i].f);
}
i++;
}

return (NULL);
}
