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
	ssize_t write_appended_text;

	if (filename == NULL)
	{
	return (-1);
	}
	int fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_appended_text = write(fd, text_content, strlen(text_content));
		if(write_appended_text == -1)
		{
		close(fd);
		return (-1);
		}
	}
	close(fd);
	return (1);
}
