#ifndef MAIN_H
#define MAIN_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_string(va_list args, char *separator);
#endif
