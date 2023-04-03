#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int m;
	int b[5] = {97, 101, 111, 116, 108};
	int c[5] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] > 0; i++)
	{
		for (m = 0; m < 5; m++)
		{
			if (s[i] == b[m] || s[i] == (b[m] -32))
			{
				s[i] = c[m];
			}
		}
	}
	return (s);
}
