#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i;
	int m;

	i = 0;
	while (*(dest + i) > 0)
	{
		i++;
	}
	for (m = 0; *(src + m) > 0; m++)
	{
		*(dest + i) = *(src + m);
		i++;
	}
	*(dest + (i + m)) = 0;
	return (dest);
}
