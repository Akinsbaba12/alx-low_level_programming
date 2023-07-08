#include "main.h"

/**
 * get_bit - Index bit value is gotten
 * @n: Bit itself
 * @index: index value at - indices start at 0.
 *
 * Return: on Error -1 otherwise bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 16))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
