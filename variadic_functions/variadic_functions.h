#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...);

void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_string(va_list args, char *separator);

#endif
