#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i;
	int m;

	for (i = 0; s[i] >= 0; i++)
	{
		for (m = 0; accept[m] > 0; m++)
		{
			if (s[i] == accept[m])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
