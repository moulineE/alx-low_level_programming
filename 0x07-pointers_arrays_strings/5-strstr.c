#include "main.h"
/**
 * *_strstr - unction finds the first occurrence of the substring needle
 * @haystack: the string to search in
 * @needle: the substring to searchh for
 *
 * Return a pointer to the beginning of the substring 
 * or 0 if there are ont any occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int m;
	int c;
	int tflag;
	
	tflag = 0;
	m = 0;
	for (c = 0; needle[c] > 0; c++)
	{
	}
	for (i = 0; haystack[i] > 0; i++)
	{
		if (haystack[i] == needle[m])
		{
			while (needle[m] > 0)
			{
				if (haystack[i + m] == needle[m])
				{
					tflag = tflag + 1;
				}
				m++;
			}
		}
		if (tflag == c)
		{
			return (&haystack[i]);
		}
		else
		{
			tflag = 0;
		}
	}
	return (0);
}
