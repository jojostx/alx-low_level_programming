#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * error_close_fd - prints error message if files can't be closed.
 * @fdval: file descriptor.
 * Return: no return.
 */
void error_close_fd(int fdval)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdval);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 *
 * if the number of argument is not the correct one,
 * exit with 97 and prints to standard error
 *
 * if the file to copy to already exists, truncate it
 *
 * if the to copy from does not exist or can not be read,
 * exit with 98 and print an error to standard error
 *
 * if the file creation or copy fails exit with 99
 * and print an error to standard error
 *
 * if file descriptor can not be closed exit with 100
 * and print an error to standard error
 *
 * permissions of the created file "rw-rw-r--"
 */
int main(int argc, char *argv[])
{
	int fd_copy_from, fd_copy_to;
	ssize_t nwr, nchars;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_copy_from = open(argv[1], O_RDONLY);
	fd_copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fd_copy_from, fd_copy_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_copy_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(fd_copy_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	if (close(fd_copy_from) == -1)
		error_close_fd(fd_copy_from);

	if (close(fd_copy_to) == -1)
		error_close_fd(fd_copy_to);

	return (0);
}
