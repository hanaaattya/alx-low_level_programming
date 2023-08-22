#include "main.h"


int _strlen(char *s)
{
	int length = 0;

	for (length = 0; *s != '\0'; s++)
		++length;
	return (length);
}
