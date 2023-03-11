#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */
int _abs(int n)

{
if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
