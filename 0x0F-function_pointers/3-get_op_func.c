#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* get_op_func - selects the correct function to perform the operation
* Return: result ad an int valaue
* @s: integer input
*/

int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[6];

ops[0].op = "+";
ops[0].f = op_add;
ops[1].op = "-";
ops[1].f = op_sub;
ops[2].op = "*";
ops[2].f = op_mul;
ops[3].op = "/";
ops[3].f = op_div;
ops[4].op = "%";
ops[4].f = op_mod;
ops[5].op = NULL;
ops[5].f = NULL;

i = 0;

while (s && (i < 6))
{
if (s[0] == ops[i].op[0])
{
	return (ops[i].f);
}
i++;
}

return (NULL);
}
