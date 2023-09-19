#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x)


/*******Functions***/

/*function print charcters, string,and percentage*/

int print_char(va_list test, char *take);
int print_stirng(va_list test, char *take);
int print_percent(va_list test, char buffer[],
		int flags, int width, int precision, int size);


/* print_prototype */
int _printf(const char *format, ...);

#endif
