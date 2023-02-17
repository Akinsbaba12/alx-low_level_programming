#include <stdio.h>

/**
 * main- Entry point
 * printf- The function prints the size of types
 * Return: (0) Success
 */

int main(void)
{
	int c;
	int i;
	int li;
	int lli;
	int f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);
	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}
