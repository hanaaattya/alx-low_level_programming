#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	for (char ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
