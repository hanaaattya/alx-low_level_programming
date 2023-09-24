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
	int start_index = (length -1) / 2;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}
	for (i = start_index ; start_index != '\0' ; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
