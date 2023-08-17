#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * if number mult to 3 print Fizz
 * if mult to 5 print Buzz
 * if mult to 3 & 5 print FizzBuzz
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", i);
	if (i != 100)
		printf(" ");
	else
		printf("\n");
}
	return (0);
}
