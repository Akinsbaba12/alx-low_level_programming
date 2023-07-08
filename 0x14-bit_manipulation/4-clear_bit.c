#include "main.h"

/**
 * clear_bit - Bit value set to 0
 * @n: Bit pointer
 * @index: Index value at - indices start at 0.
 *
 * Return: -1 if error occurs otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 12))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
