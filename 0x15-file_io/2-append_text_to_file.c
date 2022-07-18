#include "main.h"

/**
*append_text_to_file - appends text to file
*@filename: name of file
*@text_content: text to add
*Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
