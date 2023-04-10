#include "main.h"

/**
 * set_bit - Value of bit set to 1
 * @n: Bit pointer
 * @index: Index value - indices start at 0.
 *
 * Return: On success 1 or On failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 16))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
