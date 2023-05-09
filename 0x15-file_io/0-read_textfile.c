#include "main.h"
/**
 *  read_textfile - function that reads a text file and prints it to
 *  the POSIX standard output.
 *  @filename: the file to read
 *  @letters: the number of letters it should read and print
 *
 *  Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r_count, w_count, fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r_count = read(fd, buffer, letters);
	w_count = write(STDOUT_FILENO, buffer, r_count);
	free(buffer);
	close(fd);
	return (w_count);
}
