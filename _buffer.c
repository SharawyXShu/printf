#include "main.h"

int case_1(va_list lonly, char *buffer, int boxs)
{
buffer[boxs] = (char)va_arg(lonly, int);
return(boxs + 1);
}

void _buffer(char *buffer , int boxs)
{
write(1, buffer, boxs);
}
int case_2(va_list lonly, char *buffer, int boxs)
{
int frist_n = 0;
char *star = va_arg(lonly, char *);
if(star == NULL)
star = "(null)";
while ((star[frist_n] != '\0') && (boxs < (BUFFER_SIZE - 1)))
{
buffer[boxs] = star[frist_n];
boxs++;
frist_n++;
}
return(boxs);
}
int _printf_buffer(const char *mat, ...)
{
va_list lonly;
char buffer[BUFFER_SIZE];
int FINALLY_YES =0,boxs = 0;
if (mat == NULL)
return (0);
va_start(lonly, mat);
while (*mat)
{
if (*mat == '%')
{
mat++;
switch (*mat)
{
case 'c':
boxs = case_1(lonly,buffer, boxs);
break;
case 's':
boxs = case_2(lonly,buffer, boxs);
break;
case '%':
buffer[boxs] = '%';
boxs++;
break;
default:
buffer[boxs] = '%';
boxs++;
buffer[boxs] = *mat;
boxs++;
break;
}
}
else
{
buffer[boxs] = *mat;
boxs++;
}
mat++;
if (boxs >= BUFFER_SIZE - 1)
{
_buffer(buffer ,boxs);
FINALLY_YES += boxs;
boxs = 0;
}
}
_buffer(buffer , boxs);
FINALLY_YES += boxs;
va_end(lonly);
return(FINALLY_YES);
}
