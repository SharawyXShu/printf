#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>







/*******Functions***/

/*function print charcters, string,and percentage*/

int print_char(va_list test, char *take);
int print_stirng(va_list test, char *take);
int print_percent(va_list, char *take);


/* print_prototype */
int _printf(const char *format, ...);

#endif
