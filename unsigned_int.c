#include "main.h"
#include <stdlib.h>

/**
 * print_u - A function that prints an unsigned integer
 * @u: unsigned int to print
 * Return: number of printed digits
 */

int print_u(unsigned int u)
{
	unsigned int a[10];
	unsigned int j = 1, m = 1000000000, sum = 0;
	int counter = 0;

	a[0] = u / m;
	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (u / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
