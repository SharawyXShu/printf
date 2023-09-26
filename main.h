#ifndef MAIN_H
#define MAIN_H






#define BUFFER_SIZE 1024


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>


int _putchar (char CHraCTer);

int _printf(const char *format, ...);
int _case_c(va_list lonly);
int _case_s(va_list lonly);
int _print_string(char *star);
int case_1(va_list lonly, char *buffer, int boxs);
void _buffer(char *buffer, int boxs);
int case_2(va_list lonly, char *buffer, int boxs);
int _printf_buffer(const char *mat, ...);

int _HELP_ME(unsigned char CHARACTER);

#endif
