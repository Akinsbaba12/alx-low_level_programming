#include "main.h"

/**
 * _craze - calculate (eli and craze)
 * @eli: eli of the exponet
 * @crz: craze of the exponet
 * Return: value of eli and craze
 */
unsigned long int _craze(unsigned int eli, unsigned int crz)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= crz; i++)
		num *= eli;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _craze(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
