#include "main.h"

/**
*read_textfile - reads a text file
*@filename: name of file
*@letters: amount of letters to print
*Return: n
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;

	if (filename == NULL)
		return (0);
	n = write(1, filename, letters);
	return (n);
}
