#include "main.h"

/*int_to_bin - converts a base 10/decimal number to base 2 binary
 * @nu: Base 10 number to be converted
 * Returns: the length of base 2 number converted to
 */

int int_to_bin(int nu)
{
	int l = 0, rem, bin = 0, mon = 1;

	if (nu == 0)
		l += _putchar(nu);
	if (nu > 0)
	{
		while (nu != 0)
	{
		rem = nu % 2;
		nu /= 2;
		bin += rem * mon;
		mon *= 10;
	}
		l += print_number(bin);
	}
	return (l);
}