#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - A function that prints to stdout like printf.
 * @format: A string with maybe or not include various arguments passed to the
 * function.
 * Return: length of format string
 */

int _printf(const char *format, ...)
{
	va_list ap;
	char *temp;
	int i = 0, num, count = 0;
	unsigned long int num2;

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
				temp = va_arg(ap, char*);
				if (temp == NULL)
					temp = "(null)";
				while (*temp)
					count += _putchar(*temp++);
				break;
			case 'd':
				num = va_arg(ap, int);
					count += print_number(num);
				break;
			case 'i':
				num = va_arg(ap, int);
					count += print_number(num);
				break;
			case 'b':
				num2 = va_arg(ap, unsigned long int);
				count += int_to_bin(num2);
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

