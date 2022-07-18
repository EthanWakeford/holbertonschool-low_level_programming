#include "main.h"

/**
*main - copies file contents to another file
*@argc: count of arguments
*@argv: pointer to list of argument strings
*Return: always 0
*/

int main(int argc, char **argv)
{
	ssize_t fd_1, fd_2, output;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_1 = open(argv[1], O_RDONLY);
	fd_2 = open(argv[2], O_TRUNC | O_CREAT | O_RDWR, 00664);
	output = write(fd_2, buf, read(fd_1, buf, 1024));
	if ((output == -1) | (fd_2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fd_1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd_1);
		exit(100);
	}
	if (close(fd_2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd_2);
		exit(100);
	}
	return (0);
}
