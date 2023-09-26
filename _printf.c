#include "main.h"
#include <stddef.h>

/**
 *_case_c - a fanction that test  characters______
 *@lonly:argument_____
 *Return: no return____
 */

int  _case_c(va_list lonly)
{
return (_putchar(va_arg(lonly, int)));
}

/**
 *_case_s - a fanction that test strings______
 *@lonly:argument________
 *Return: no return___
 */
int _case_s(va_list lonly)
{
int FINALLY_YES = 0;
char *STRing = va_arg(lonly, char *);
if (STRing == NULL)
STRing = "(null)";
while (*STRing)
{
FINALLY_YES += _putchar(*STRing);
STRing++;
}
return (FINALLY_YES);
}
/**
 *_case_d_2 - a fanction that work with case_d_1 (function)_____
 *@n_m_b_e_r:number to start__
 *Return: return FINALLY_YES___
 */
int _case_d_2(int n_m_b_e_r)
{
int FINALLY_YES = 0;
if (n_m_b_e_r / 10)
FINALLY_YES += _case_d_2(n_m_b_e_r / 10);
FINALLY_YES += _putchar('0' + n_m_b_e_r % 10);
return (FINALLY_YES);
}

/**
 *_case_d_1 - a fanction that test  intger_____
 *@lonly:argument____
 *Return: return FINALLY_YES___
 */
int _case_d_1(va_list lonly)
{
int n_m_b_e_r = va_arg(lonly, int);
int FINALLY_YES = 0;
if (n_m_b_e_r < 0)
{
FINALLY_YES += _putchar('-');
n_m_b_e_r = -n_m_b_e_r;
}
if (n_m_b_e_r / 10)
FINALLY_YES += _case_d_2(n_m_b_e_r / 10);
FINALLY_YES += _putchar('0' + n_m_b_e_r % 10);
return (FINALLY_YES);
}

/**
 *_printf - a fanction that output characters____________
 *@format: format cases___________
 *Return: return the total of number of characters printed_______
 */
int _printf(const char *format, ...)
{
va_list lonly;
int FINALLY_YES = 0;
if (format == NULL)
return (-1);
va_start(lonly, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
FINALLY_YES += _case_c(lonly);
break;
case 's':
FINALLY_YES +=  _case_s(lonly);
break;
case 'd':
case 'i':
FINALLY_YES += _case_d_1(lonly);
break;
case '%':
FINALLY_YES += _putchar ('%');
break;
default:
FINALLY_YES += _putchar('%');
FINALLY_YES += _putchar(*format);
break;
}
}
else
{
FINALLY_YES += _putchar(*format);
}
format++;
}
va_end(lonly);
return (FINALLY_YES);
}
