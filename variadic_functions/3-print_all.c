#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: list of arguments
 * @separator: separator to print before value
 */
void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: list of arguments
 * @separator: separator to print before value
 */
void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of arguments
 * @separator: separator to print before value
 */
void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of arguments
 * @separator: separator to print before value
 */
void print_string(va_list args, char *separator)
{
	char *str;

	str = va_arg(args, char *);
	switch (str == NULL)
	{
		case 1:
			str = "(nil)";
			break;
	}
	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *separator;

	i = 0;
	separator = "";
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args, separator);
				separator = ", ";
				break;
			case 'i':
				print_int(args, separator);
				separator = ", ";
				break;
			case 'f':
				print_float(args, separator);
				separator = ", ";
				break;
			case 's':
				print_string(args, separator);
				separator = ", ";
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
}
