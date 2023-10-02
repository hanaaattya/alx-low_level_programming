#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers.
 * @argv: pointer
 * #argc: int
 *
 * return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for(i = 1 ; i < argc ; i++)
	{
	num = atoi(argv[i]);
	if (num <= 0 || !isdigit(*argv[i]))
	{
	printf("Error\n");
	return (1);
	}

	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
