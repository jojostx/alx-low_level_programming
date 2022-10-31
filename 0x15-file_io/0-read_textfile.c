#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read from
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters read from the file
 * or 0 if filename is `NULL` or write() fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if  (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nrd = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nrd);

}
