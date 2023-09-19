#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_percent - Prints a percent sign
 * @test: Arguments list
 * @buffer: Argu array to make the print function handle
 * @flags:  The active flags
 * @width: The width.
 * @precision: The Precision
 * @size: The Size of specifier
 * @n: argument
 *
 * Return: The Num of char that printed
 */

int print_int(va_list test, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(test, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[i--] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}
