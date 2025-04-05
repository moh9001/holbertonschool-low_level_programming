#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to read and print
 * Return: number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_count, w_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r_count = read(fd, buffer, letters);
	if (r_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w_count = write(STDOUT_FILENO, buffer, r_count);
	free(buffer);
	close(fd);

	if (w_count != r_count)
		return (0);

	return (w_count);
}
