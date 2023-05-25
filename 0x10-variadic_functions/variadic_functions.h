#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>

void format_char(char *separator, va_list op);
void format_int(char *separator, va_list op);
void format_float(char *separator, va_list op);
void format_string(char *separator, va_list op);

/**
* struct form - form_t
* @in: char
* @f: function pointer
*/
typedef struct form
{
	char *in;
	void (*f)(char *, va_list);
} form_t;
/*
* form_t token[] = {
*	{"c", format_char},
*	{"i", format_int},
*	{"f", format_float},
*	{"s", format_string},
*	{NULL, NULL}
*};
*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
