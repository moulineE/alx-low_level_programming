#include "main.h"

int _strlen(char *s);

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the filename file
 *
 * Return: on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int tc_len, w_count, fd;
	mode_t permi;

	if (filename == NULL)
	{
		return (-1);
	}
	permi = (S_IRUSR | S_IWUSR);
	tc_len = _strlen(text_content);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, permi);
	w_count = write(fd, text_content, tc_len);
	if (fd == -1 || w_count == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
