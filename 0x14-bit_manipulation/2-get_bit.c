#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: a digit
 * @index: he index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > (8 * sizeof(unsigned long int) - 1))
	{
		return (-1);
	}

	bit_value = ((n >> index) & 1);
	return (bit_value);
}
