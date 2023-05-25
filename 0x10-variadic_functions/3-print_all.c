#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* format_int - entry point
* @separator: number of command
* @op: input arg
*/

form_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
};

void format_int(char *separator, va_list op)
{
printf("%s%d", separator, va_arg(op, int));
}

/**
* format_char - entry point
* @separator: number of command
* @op: input arg
*/

void format_char(char *separator, va_list op)
{
printf("%s%c", separator, va_arg(op, int));
}

/**
* format_float - entry point
* @separator: number of command
* @op: input arg
*/

void format_float(char *separator, va_list op)
{
printf("%s%f", separator, va_arg(op, double));
}

/**
* format_string - entry point
* @separator: number of command
* @op: input arg
*/

void format_string(char *separator, va_list op)
{
char *str;
str = va_arg(op, char*);

switch ((int)(!str))
	case 1:
		str = "nil";
printf("%s%s", separator, str);
}

/**
* print_all - entry point
* @format: number of command
*/

void print_all(const char * const format, ...)
{
int i, j;
char *separator;
va_list op;
i = 0;
separator = "";

va_start(op, format);
while (format && format[i])
{
	j = 0;
	while (token[j].in)
	{
		if (format[i] == token[j].in[0])
		{
			token[j].f(separator, op);
			separator = ", ";
		}
		j++;
	}
	i++;
}

va_end(op);
printf("\n");

}
