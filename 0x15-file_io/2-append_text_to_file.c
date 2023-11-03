#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: file name
 * @text_content: the content to be appended at the end of a file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int write_append_text;

	if (filename == NULL)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
	return (-1);
	}
	while (text_content[len] != '\0')
	{
	len++;
	}
	write_append_text = write(fd, text_content, len);
	close(fd);
	if (write_append_text == -1)
	{
	return (-1);
	}
	return (1);
}
