#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#define USAGE "Usage: %s %s\n"
#define NOREAD_ERR "Error: Can't read from file %s\n"
#define NOWRITE_ERR "Error: Can't write to file %s\n"
#define NOCLOSE_ERR "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - The main function
 * @argc: The number of arguments passed to the program
 * @argv: The array of arguments
 *
 * Return: success returns 0 Otherwise, returns an appropriate error
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int from_fd;
	int fd_to;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE, argv[0], "file_from file_to"), exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, NOREAD_ERR, argv[1]), exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, NOWRITE_ERR, argv[2]), exit(99);;
	}

	read_bytes = read(from_fd, buffer, 1024);
	while (read_bytes > 0)
	{
	write_bytes = write(fd_to, buffer, read_bytes);
	if (write_bytes != read_bytes)
	{
	dprintf(STDERR_FILENO, NOWRITE_ERR, argv[2]), exit(99);
	}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, NOREAD_ERR, argv[1]), exit(98);
	}
	if (close(from_fd) == -1)
	{
	dprintf(STDERR_FILENO, NOCLOSE_ERR, from_fd), exit(100);
	}
	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, NOCLOSE_ERR, from_fd), exit(100);
	}
	return (EXIT_SUCCESS);
}
