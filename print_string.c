#include "main.h"
/**
 * _putchar - a function prints characters _________
 *@CHraCTer : input character ________
 *Return: return (CHraCTer) __________
 */
int _putchar (char CHraCTer)

{
return (write(1, &CHraCTer, 1));
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
FINALLY_YES += _putchar ('\\');
FINALLY_YES += _putchar ('x');
}
else
{
FINALLY_YES += _putchar(*star);
}
star++;
}
return (FINALLY_YES);
}
