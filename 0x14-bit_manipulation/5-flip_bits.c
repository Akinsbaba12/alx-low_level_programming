#include "main.h"

/**
 * flip_bits - the num of bits needed to be flipped
 * @n: number
 * @m: flipped bits
 *
 * Return: Needed number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, qts = 0;

	while (xor > 0)
	{
		qts += (xor & 1);
		xor >>= 1;
	}

	return (qts);
}
