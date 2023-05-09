#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file to appends
 * @text_content: a NULL terminated string to write to the filename file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tc_len, w_count, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	tc_len = _strlen(text_content);
	fd = open(filename, O_RDWR | O_APPEND);
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

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
