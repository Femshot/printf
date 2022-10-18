#include "main.h"

/**
 * print_o - A function that prints an unsigned int in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
 */

int print_o(unsigned int o)
{
	unsigned int a[11];
	unsigned int j = 1, m = 1073741824, sum = 0;
	int counter;

	a[0] = o / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (o / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		sum += a[j];
		if (sum || j == 10)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}

