#include "main.h"

/**
*create_file - creates a file with text
*@filename: name of file
*@text_content: text to add to file
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content) + 1);
	}
	close(fd);
	return (1);
}
