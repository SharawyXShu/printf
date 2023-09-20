#include "main.h"

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
if ((*star / 16) < 10)
FINALLY_YES += _putchar((*star / 16) + '0');
else
FINALLY_YES += _putchar((*star / 16) - 10 + 'A');
if ((*star % 16) < 10)
FINALLY_YES += _putchar((*star % 16) + '0');
else
FINALLY_YES += _putchar((*star % 16) - 10 + 'A');

}
else
{
FINALLY_YES += _putchar(*star);
}
star++;
}
return (FINALLY_YES);
}
