#include "main.h"

#include <stdio.h>


/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: int parameter
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	int start_index = (length + 1)/2;
	for (i = start_index ; start_index != '\0' ; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
