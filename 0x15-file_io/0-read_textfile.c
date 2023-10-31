#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	int read_letters;
	int write_letters;
	char *buffer;
	if (filename == NULL)
		return (0);
	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
		return (0);
	buffer = malloc(sizeof (char) * letters);
	if (buffer == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	read_letters = read(f_descriptor, (void *)buffer, letters);
	if (read_letters == -1)
	{
	free(buffer);
	close(f_descriptor);
	return (0);
	}
	write_letters = write(STDOUT_FILENO, (void *)buffer, read_letters);
	if (write_letters == -1 || write_letters != read_letters)
	{
	free(buffer);
	close(f_descriptor);
	return (0);
	}
	free(buffer);
	close(f_descriptor);
	return (read_letters);
}
