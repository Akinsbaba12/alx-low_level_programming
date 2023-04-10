#include "main.h"

/**
 * print_binary - Binary representation of a number.
 * @n: Binary printed number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int q, print = 0;
	unsigned long int rep;

	for (t = 63; t >= 0; t--)
	{
		qrt = n >> t;

		if (qrt & 1)
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
