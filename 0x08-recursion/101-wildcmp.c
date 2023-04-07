#include "main.h"

int secondaryfonc(char *n, char *n2, int i, int j, int r, int strf);
int stringlent(char *a, int i);
/**
 * wildcmp - function that compares two strings and returns
 *  1 if the strings can be considered identical, otherwise return 0
 *  s2 can contain the special character *
 *  The special char * can replace any string (including an empty string)
 * @s1: the string to compare
 * @s2: the second strig to compare
 *
 * Return: 1 is identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int r;
	int c;
	int c2;

	c = stringlent(s1, 0);
	c2 = stringlent(s2, 0);
	r = (secondaryfonc(s1, s2, c - 1, c2 - 1, 1, 0));
	return (r);
}
/**
 * secondaryfonc - check if s1 identical to s2
 * @n: the strig to compare
 * @n2: the second strig to compare
 * @i: the count of char of the string s1
 * @j:  the count of char of the string s1
 * @r: the result of the check
 * @strf: flag to *
 * Return: r
 */
int secondaryfonc(char *n, char *n2, int i, int j, int r, int strf)
{

	if (i >= 0 && j >= 0)
	{
		if (n[i] == n2[j])
		{
			r = r * 1;
			i--;
			j--;
		}
		if (n[i] != n2[j])
		{
			if (n2[j] == '*')
			{
				r = r * 1;
				strf = j;
				j--;
			}
			else if (n2[j + 1] == '*')
			{
				i--;
			}
			else if (strf != 0)
			{
				j = strf;
				i--;
				if (i < 0 || n[1] != n2[1])
				{
					r = r * 0;
				}
			}
			else
			{
				r = r * 0;
				j--;
				i--;
			}
		}
		r = r * (secondaryfonc(n, n2, i, j, r, strf));
	}
	if (i >= 0 && j < 0)
	{
		if (n2[j + 1] == '*')
		{
			r = r * 1;
			i--;
			j++;
			r = r * (secondaryfonc(n, n2, i, j, r, strf));
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
/**
 * stringlent - a fonction that count the lenth of a string
 * @a: the string to count
 * @i: the inisialisation of the array
 *
 * Return: i, the count of char
 */
int stringlent(char *a, int i)
{
	if (a[i] == 0)
	{
		return (i);
	}
	return (stringlent(a, i + 1));
}
