#include "main.h"

/**
 * print_binary - A function which print binary representation of a number.
 * @n: Numbers to print in binary.
 * Return: null
 */
void print_binary(unsigned long int n)
{
	int q, print = 0;
	unsigned long int std;

	for (q = 63; q >= 0; q--)
	{
		std = n >> q;

		if (std & 1)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
