#include <stdio.h>

/**
 * main - prints its name
 * @argv: ptr
 * @argc: int
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
