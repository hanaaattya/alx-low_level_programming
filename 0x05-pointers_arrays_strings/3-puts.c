#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: int parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
        for (str = 0; *str != '\0'; str++)
        putchar(*str + 0);
        putchar ('\n');
}
