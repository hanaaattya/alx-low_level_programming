#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 *@argc: var
 *@argv: ptr
 *
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
	int i;

	for(i = 0 ; i < argc ; i++)
{
	printf("%s\n", argv[i]);
}
	return(0);
}
