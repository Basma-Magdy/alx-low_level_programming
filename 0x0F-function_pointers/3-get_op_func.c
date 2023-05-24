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
op_t ops[6];
i = 0;
ops[6] = {
	[0] = {"+", op_add},
	[1] = {"-", op_sub},
	[2] = {"*", op_mul},
	[3] = {"/", op_div},
	[4] = {"%", op_mod},
	[5] = {NULL, NULL}
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
