#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - A function that prints to stdout like printf.
 * @format: A string with maybe or not include various arguments passed to the
 * function.
 * Return: length of displayed characters
 */

int _printf(const char *format, ...)
{
	va_list ap;
	char *temp, *temp2, *temp3, *temp4;
	int i = 0, num, numz, count = 0;
	unsigned int num2, num3, num4, num5, num6;
	unsigned long num7;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[++i])
			{
			case 'c':
				count += _putchar((char) va_arg(ap, int));
				break;
			case '%':
				count += _putchar('%');
				break;
			case 's':
				temp = va_arg(ap, char *);
				if (temp == NULL)
					temp = "(null)";
				while (*temp)
					count += _putchar(*temp++);
				break;
			case 'd':
				numz = va_arg(ap, int);
					count += print_number(numz);
				break;
			case 'i':
				num = va_arg(ap, int);
					count += print_number(num);
				break;
			case 'b':
				num2 = va_arg(ap, unsigned int);
				count += int_to_bin(num2);
				break;
			case 'u':
				num6 = va_arg(ap, unsigned int);
				count += print_u(num6);
				break;
			case 'x':
				num4 = va_arg(ap, unsigned int);
				count += print_x(num4);
				break;
			case 'o':
				num5 = va_arg(ap, unsigned int);
				count += print_o(num5);
				break;
			case 'X':
				num3 = va_arg(ap, unsigned int);
				count += print_X(num3);
				break;
			case 'S':
				temp2 = va_arg(ap, char *);
				count += print_S(temp2);
				break;
			case 'r':
				temp3 = va_arg(ap, char *);
				count += print_r(temp3);
				break;
			case 'p':
				num7 = va_arg(ap, unsigned long);
				count += print_p(num7);
				break;
			case 'R':
				temp4 = va_arg(ap, char *);
				count += print_R(temp4);
				break;
			default:
				count += _putchar(format[--i]);
				break;
			}
			++i;
			continue;
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
