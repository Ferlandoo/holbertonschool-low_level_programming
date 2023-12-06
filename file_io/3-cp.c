#include "main.h"

/**
 * check_fails - checks if file_from and file_to fails
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: void
 */

void check_fails(char *file_from, char *file_to)
{
	int file_src, file_dest;

	file_src = open(file_from, O_RDONLY);
	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(file_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}
	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
}

/**
 * cp - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: void
 */

void cp(char *file_from, char *file_to)
{
	int file_src, file_dest, read_src, write_dest;
	char content[1024];

	check_fails(file_from, file_to);
	file_src = open(file_from, O_RDONLY);
	file_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_src = read(file_src, content, 1024)) > 0)
	{
		write_dest = write(file_dest, content, read_src);
		if (write_dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (read_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close(file_src);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, otherwise exit with error code
 */

int main(int argc, char *argv[])
{
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
	cp(argv[1], argv[2]);
	return (0);
}
