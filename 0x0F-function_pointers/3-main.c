#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{;
	int num_1, num_2, result;
	char *operator;

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}

	num_1 = atoi(argv[1]);
	*operator = argv[2];
	num_2 = atoi(argv[3]);

	int (*operation)(int, int) = get_op_func(operator);

	if (operation == NULL)
	{
	printf("Error\n");
	return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num_2 == 0)
	{
	printf("Error\n");
	return (100);
	}

	result = operation(num_1, num_2);
	printf("%d\n", result);
	return (0);
}
