#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x)
#define BUFF_SIZE 1024

/*******Functions***/

/*function print charcters, string,and percentage*/

int print_char(va_list test, char *take);
int print_stirng(va_list test, char *take);
int print_percent(va_list test, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list test, char buffer[],
	int flags, int width, int precision, int size);


int handle_print(const char *fmt, int *i,
va_list test, char buffer[], int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list test);
int get_precision(const char *format, int *i, va_list test);
int get_size(const char *format, int *i);

/* The width handler */
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);


/* print_prototype */
int _printf(const char *format, ...);

/****************** UTILS ******************/
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif
