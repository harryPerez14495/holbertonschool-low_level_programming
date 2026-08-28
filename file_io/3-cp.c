#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_descriptor - closes a file descriptor
 * @fd: file descriptor to close
 */
void close_descriptor(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_source - opens the source file
 * @filename: name of the source file
 *
 * Return: source file descriptor
 */
int open_source(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_destination - opens or creates the destination file
 * @filename: name of the destination file
 * @fd_from: source file descriptor
 *
 * Return: destination file descriptor
 */
int open_destination(const char *filename, int fd_from)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		close_descriptor(fd_from);
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * main - copies the content of one file into another
 * @argc: number of command-line arguments
 * @argv: array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open_source(argv[1]);
	fd_to = open_destination(argv[2], fd_from);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_descriptor(fd_from);
	close_descriptor(fd_to);
	return (0);
}
