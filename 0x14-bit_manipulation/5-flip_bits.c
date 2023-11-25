#include "main.h"

/**
 * flip_bits - returns the nbr of bits u would need.
 * @n: int
 * @a: int
 * Return: nbits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int a)
{
	unsigned int nbits;

	for (nbits = 0; n || a; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (a & 1))
			nbits++;
	}

	return (nbits);
}
