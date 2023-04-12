/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char that initialize the array
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > size; i++)
	{
		str[i] = c;
	}
	return (str);
}
