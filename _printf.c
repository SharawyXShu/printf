#include "main.h"

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
