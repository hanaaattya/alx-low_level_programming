#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 *
 *@argc: var
 *@argv: ptr
 *
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
