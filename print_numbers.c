#include "main.h"

/**
 * print_number - prints an integer n
 *@n: integer to be printed
 *Return: number of digits printed
 */

int print_number(int n)
{
	unsigned int n1;
	int t = 0, z = 0;

	if (n < 0)
	{
		n1 = -n;
		t += _putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		z = print_number(n1 / 10);
	}
	t += z + _putchar((n1 % 10) + '0');
	return (t);
}
