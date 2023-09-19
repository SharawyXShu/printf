#include "main.h"
/**
 *_putchar - a fanction prints characters________
 *@CHraCTer: input character________
 *Return: return CHraCTer_____
 */
int _putchar (char CHraCTer)
{
return (write(1, &CHraCTer, 1));
}

/**
 *_case_c - a fanction that test  characters______
 *@lonly:argument_____
 *Return: no return____
 */

void _case_c(va_list lonly)
{
char CC = (char)va_arg(lonly, int);
_putchar(CC);
}

/**
 *_case_s - a fanction that test strings______
 *@lonly:argument________
 *Return: no return___
 */
void _case_s(va_list lonly)
{
char *STRing = va_arg(lonly, char *);
while (STRing && *STRing)
_putchar(*STRing++);
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
va_start(lonly, format);
for (; *format != '\0'; format++)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 's':
_case_s(lonly);
break;
case '%':{
_putchar ('%');
FINALLY_YES++;
break;
case 'c':
_case_c(lonly);
FINALLY_YES++;
break;
default:
break;
}
}
}
else
{
_putchar(*format);
FINALLY_YES++;
}
}
va_end(lonly);
return (FINALLY_YES);
}
