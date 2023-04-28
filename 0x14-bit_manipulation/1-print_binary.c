#include "main.h"

/**
 * print_binary - Convert dec to binary
 * @n: Number
 */

void print_binary(unsigned long int n)
{
	int e, count = 0;

	for (e = 10; e >= 0; e--)
	{
		if (n & (1 << e))
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
