#include "main.h"

/**
 *_putchar - a fanction prints characters________
 *@CHraCTer: input character________
 *Return: return CHraCTer_____
 */

int _putchar (char CHraCTer)
{
return (write(1,&CHraCTer,1));
}
/**                                                                                                                                                                                                               
 *_printf - a fanction that output characters____________                                                                                                                                                         
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
case 's':{
char *STRing = va_arg(lonly, char *);
while (STRing && *STRing)
{
_putchar(*STRing++);
FINALLY_YES++;
}
break;
}
case '%':{
_putchar ('%');
FINALLY_YES++;
break;
}
case 'c': {
char CC = (char)va_arg(lonly, int);
_putchar(CC);
FINALLY_YES++;
break;
}
default:
break;
}
}
else
{
_putchar(*format);
FINALLY_YES++;
}
}
va_end (lonly);
return (FINALLY_YES);
}
