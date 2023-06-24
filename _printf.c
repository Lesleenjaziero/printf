#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf -  a function that produces output according to a format.
 * 
 * @format: output format
 *
 * Return:the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = vprintf(format, args);
	va_end(args);

	return (count);
}
