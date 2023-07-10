#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters:  is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 when the filename is NULL or function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (wr);
}
