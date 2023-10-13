#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_int(va_list argsp);
void print_char(va_list argsp);
void print_float(va_list argsp);
void print_string(va_list argsp);
void print_all(const char * const format, ...);
#endif
