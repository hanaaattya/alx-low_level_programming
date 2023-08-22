#include "main.h"

#include <stdio.h>

/**
 * rev_string - prints a reverse string
 * @s: int parameter
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
	length++;
	}
	for (i = 0; i < length / 2; i++)
	{
	char temp = s[i];

	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	}
}
