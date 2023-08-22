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
	length++;
	for (length /= 2 ; str[length] != '\0' ; length++)
	{
	putchar(str[length]);
	}
	putchar('\n');
}
