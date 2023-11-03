#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: the content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int write_text;

	if (filename == NULL)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	text_content = "";
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
	return (-1);
	}
	while (text_content[len] != '\0')
	{
	len++;
	}
	write_text = write(fd, text_content, len);
	close(fd);
	if (write_text == -1)
	{
	return (-1);
	}
	return (1);
}
