#ifndef FUNCTION_POINNTERS_H
#define FUNCTION_POINNTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
