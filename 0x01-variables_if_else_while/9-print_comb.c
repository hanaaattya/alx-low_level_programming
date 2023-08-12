#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a < '10'; a++)
	{
	for (b = '0'; b < '10'; b++)
	{
	putchar(a);
	putchar(b);
	if (a != 9 || b != 9)
	{
	putchar(',')
	}
	}
	}
	putchar('\n');
	return (0);
}
