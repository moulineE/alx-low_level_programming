#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: the string to change
 *
 * Return: the string in uppercase
 */
char *cap_string(char *s)
{
	int i;
	int m;
	int b[13] = {32, 9, 10, 44, 59, 46, 33, 63, 147, 40, 41, 123, 125};

	for (i = 0; s[i] > 0; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (i == 0)
			{
				s[i] = (s[i] - 32);
			}
			else if (s[i] != 32)
			{
				for (m = 0; m < 13; m++)
				{
					if (s[i - 1] == b[m])
					{
						s[i] = (s[i] - 32);
					}
				}
			}
		}
	}

	return (s);
}
