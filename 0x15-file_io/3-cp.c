#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * error - Prints an error msg
 * @exit_code: The exit code
 * @error_message: The error msg
 * @file_name: The name of the file associated with the error
 *
 * return: void
 */
void error (int exit_code, const char *error_message, const char *file_name)
{
	 dprintf(STDERR_FILENO, error_message, file_name);
	 exit(exit_code);
}

/**
 * main - The main function
 * @argc: The number of arguments passed to the program
 * @argv: The array of arguments
 *
 * Return: success returns 0 Otherwise, returns an appropriate error
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buffer[1024];
	int fd_from;
	int fd_to;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (argc != 3)
	{
	error(97, "Usage: %s file_from file_to\n", "");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	error(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
	error (99, "Error: Can't write to file", file_to);
	}

	read_bytes = read(fd_from, buffer, 1024);
	while (read_bytes > 0)
	{
	write_bytes = write(fd_to, buffer, read_bytes);
	if (write_bytes != read_bytes)
	{
	error(99, "Error: Can't write to file", file_to);
	}
	}
	if (read_bytes == -1)
	{
	error(98, "Error: Can't read from file", file_from);
	}
	if (close(fd_from) == -1)
	{
	error(100, "Error: Can't close fd", "file_from");
	}
	if (close(fd_to) == -1)
	{
	error(100, "Error: Can't close fd", "file_to");
	}
	return (0);
}
