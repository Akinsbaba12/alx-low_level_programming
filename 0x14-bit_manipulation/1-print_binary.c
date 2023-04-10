#include "main.h"

/**
 * print_binary - Binary representation of numbers
 * @n: binary form of numbers
 * Return: invalid
 */
void print_binary(unsigned long int n)
{
	int t, print = 0;
	unsigned long int qrt;

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
