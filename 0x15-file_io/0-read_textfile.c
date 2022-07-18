#include "main.h"

/**
*read_textfile - reads a text file
*@filename: file to read from
*@letters: amount of letters to read
*Return: bytes written, or -1 if failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, fd, size;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (-1);
		close(fd);
	}
	size = read(fd, buf, letters);
	if (size < 0)
		return (0);
	n = write(1, buf, size);
	free(buf);
	close(fd);
	if (n == -1)
		return (0);
	return (n);
}
