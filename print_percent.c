#include "main.h"
#include <stdio.h>

/**
 * print_percent - That prints a percent sign
 * @test: Arguments list
 * @buffer: Argu array to make the print function handle
 * @flags: The active flags
 * @width: The width
 * @precision: The Precision
 * @size: The size of specifier
 *
 * Return: The num of char that printed
 */

int print_percent(va_list test, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(test);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
