#include "main.h"

void  _print_int(const char *mat, ...)
{
  va_list lonly;
  va_start(lonly, mat);
  while(*mat)
    {
      if(*mat == '%')
	{
	  mat++;
	  switch (*mat)
	    {
	    case 'd':
	    case 'i':
	      {
		int frist = va_arg(lonly, int);
		_putchar(frist);
	    break;
	    }
	    default:
_putchar('%');
_putchar(*mat);
	    break;
	    }
	}
      else
	{
	    _putchar(*mat);
    }
      mat++;
	    }
	    va_end (lonly);
	    }
