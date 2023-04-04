#include "main.h"
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
		if (haystack[i] == needle[m] && (haystack[i + 1] == needle[m + 1] || needle[m + 1] == 0))
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
