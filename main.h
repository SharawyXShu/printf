#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/*******Functions***/

int print_char(va_list test, take_it *take);
int print_stirng(va_list test, take_it *take);
int print_percent(va_list, take_it *take);

#endif
