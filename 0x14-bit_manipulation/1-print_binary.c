#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int i)
{
	if (i > 1)
		print_binary(i >> 1);

	_putchar((i & 1) + '0');
}
