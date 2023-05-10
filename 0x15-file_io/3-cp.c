#include "main.h"

void close_fd(int fd);

/**
 * main - program that copies the content of a file to another file.
 * @argc: the nmb of arg
 * @argv: the argument file_from & file_to
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r_count, w_count;
	char *BUFFER;
	mode_t permi;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	permi = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	BUFFER = malloc(sizeof(char) * 1024);
	if (BUFFER == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(BUFFER);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	r_count = read(file_from, BUFFER, 1024);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permi);
	while (r_count > 0) 
	{
		if (r_count == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(BUFFER);
			exit(98);
		}
		w_count = write(file_to, BUFFER, r_count);
		if (w_count == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(BUFFER);
			exit(99);
		}
		r_count = read(file_from, BUFFER, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(BUFFER);
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}
/**
 * close_fd - close the fd
 * @fd: the fd
 */
void close_fd(int fd)
{
	int cl_stat;

	cl_stat = close(fd);
	if (cl_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
