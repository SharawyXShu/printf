#include "main.h"

int green(int so)
{
  int totally = 0;
  unsigned int sox;
  if (so < 0)
    {
      totally += _putchar('-');
      sox = -so;
    }
  else
    sox = so;
  if (sox/ 10)
    totally += green(sox / 10);
  totally += _putchar('0' + (sox % 10));
  return (totally);
    }

int print_int(const char *mat, ...)
{
  va_list lonly;
  int finally = 0;
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
	    va_end (lonly);
	    return (finally);
}
