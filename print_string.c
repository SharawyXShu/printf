#include "main.h"

/**
 *_HELP_ME - a funcition handel hexadicimal ____________
 *@CHARACTER: CHARACTER to start __________
 *Return: return FINALLY_YES AT END____________
 */
int _HELP_ME(unsigned char CHARACTER)
{
int FINALLY_YES = 0;
int help_1 = CHARACTER / 16;
int help_2 = CHARACTER % 16;

if (help_1 < 10)
FINALLY_YES += _putchar(help_1 + '0');
else
FINALLY_YES += _putchar(help_1 - 10 + 'A');
if (help_2 < 10)
FINALLY_YES += _putchar(help_2 + '0');
else
FINALLY_YES += _putchar(help_2 - 10 + 'A');
return (FINALLY_YES);
}
/**
 *_print_string - a functin prints like ('%s)______
 *@star : string input _____
 *Return: return total characters and print it _______
 */

int _print_string(char *star)
{
int FINALLY_YES = 0;
if (star == NULL)
star = "(null)";
while (*star)
{
if ((*star < 32) || (*star >= 127))
{
FINALLY_YES += _putchar('\\');
FINALLY_YES += _putchar('x');
if (*star < 16)
FINALLY_YES += _putchar('0');
FINALLY_YES += _HELP_ME(*star);
}
else
{
FINALLY_YES += _putchar(*star);
}
star++;
}
return (FINALLY_YES);
}
