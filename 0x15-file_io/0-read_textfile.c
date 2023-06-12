#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print or
 * 0 if it fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
