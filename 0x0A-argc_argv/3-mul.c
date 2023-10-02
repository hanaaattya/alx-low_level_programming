#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: pointer
 * @argc: counter
 *
 * return: 0 or 1 if error
 */
int main(int argc, char *argv[])
{
	int num_1;
	int num_2;

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	int result;

	result = num_1 * num_2;

	printf("%d\n", result);
	}
	return (0);
}
