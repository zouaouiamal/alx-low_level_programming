#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(void);
void close_fd(int fd);

/**
 * create_buffer - Allocates a buffer for copying data.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		perror("Error");
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	char *file_from = argv[1];
	char *file_to = argv[2];

	int fd_src = open(file_from, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close_fd(fd_src);
		exit(99);
	}

	char *buffer = create_buffer();
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close_fd(fd_src);
			close_fd(fd_dest);
			free(buffer);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd_src);
		close_fd(fd_dest);
		free(buffer);
		exit(98);
	}

	close_fd(fd_src);
	close_fd(fd_dest);
	free(buffer);

	return (0);
}
