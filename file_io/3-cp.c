#include "main.c"

/**
 * closefd - closes file descriptors
 *@fd1: first file
 *@fd2: second file
 */

void closefd(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: -number of argumenst supplied to argv
 * @argv: -array of arguments
 * Return: (0);
 */

int main(int argc, char *argv[])
{
	int fdr, fdw;
	char buffer[1024 * 8];
	int n, m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	fdw = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
		n = read(fdr, buffer, 1024 * 8);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		m = write(fdw, buffer, n);
		if (m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		closefd(fdr, fdw);
	return (0);
}
