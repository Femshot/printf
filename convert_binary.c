#include "main.h"

/**
 * int_to_bin - converts a base 10/decimal number to base 2 binary
 * @nu: Base 10 number to be converted
 * Returns: the length of base 2 number converted to
 */

int int_to_bin(unsigned int nu)
{
	unsigned int m = 2147483648, j = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	a[0] = nu / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (nu / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
