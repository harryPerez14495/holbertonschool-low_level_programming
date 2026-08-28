#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * create_file - creates a file with specified content
 * @filename: name of the file to create
 * @text_content: string to write inside the file
 *
 * Return: 1 on success, or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
		  S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		written = write(fd, text_content, length);
		if (written == -1 || (size_t)written != length)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
