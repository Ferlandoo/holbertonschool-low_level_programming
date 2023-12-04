#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed, printed;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	readed = read(fd, buffer, letters);
	if (readed == -1)
		return (0);
	printed = write(STDOUT_FILENO, buffer, readed);
	if (printed == -1)
		return (0);
	close(fd);
	free(buffer);
	return (printed);
}
