#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int nwr;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, mode);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	if (len == 0)
		text_content = "";

	nwr = write(fd, text_content, len);

	close(fd);

	if (nwr == -1)
		return (-1);

	return (1);
}
