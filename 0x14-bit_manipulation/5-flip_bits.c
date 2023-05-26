#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the 1st number
 * @m: the 2nd nimber
 *
 * Return: the number of bits you would
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = (8 * sizeof(unsigned long int) - 1), count = 0;
	unsigned long int xor_comp;

	xor_comp = n ^ m;
	while (i >= 0)
	{
		if ((xor_comp >> i) & 1)
		{
			count++;
		}
		i--;
	}
	return (count);
}
