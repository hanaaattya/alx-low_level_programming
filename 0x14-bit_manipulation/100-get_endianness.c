#include "main.h"

/**
 * get_endianness - Checks the endianness of memory
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *checking;

	checking = (char *)&n;
	if (*checking == 1)
	{
	return (1);
	}
	else
	return (0);
}
