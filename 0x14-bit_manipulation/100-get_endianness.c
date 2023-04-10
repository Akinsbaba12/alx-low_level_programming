#include "main.h"

/**
 * get_endianness - Endianness
 *
 * Return: 0 if big endian or 1 if small endian
 */
int get_endianness(void)
{
	int qrt = 1;
	char *endian = (char *)&qrt;

	if (*endian == 1)
		return (1);

	return (0);
}
