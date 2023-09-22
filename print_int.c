#include "main.h"
/**
 * green - a fuction for cases_________
 *@so: character to start ________
 *Return: return the totall ________
 */
int green(int so)
{
int totally = 0;
unsigned int sox;
if (so == INT_MIN)
{
totally += _putchar('-');
sox = INT_MAX + 1U;
}
else if (so < 0)
{
totally += _putchar('-');
sox = -so;
}
else
sox = so;
if (sox / 10)
totally += green(sox / 10);
totally += _putchar('0' + (sox % 10));
return (totally);
}
/**
 * print_int - a fanction print intger ________
 *@mat: the formate (%d&%i)__________
 *Return: return finally _____
 */
int print_int(const char *mat, ...)
{
va_list lonly;
int finally = 0;
va_start(lonly, mat);
while (*mat)
{
if (*mat == '%')
{
mat++;
switch (*mat)
{
case 'd':
case 'i':
{
finally += green(va_arg(lonly, int));
break;
}
default:
finally += _putchar('%');
finally += _putchar(*mat);
break;
}
}
else
{
finally +=  _putchar(*mat);
}
mat++;
}
va_end(lonly);
return (finally);
}
