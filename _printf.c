#include "holberton.h"
/**
 * _printf - Print with format
 *
 * @format: format
 * Return: number of characters printed
 * -1 if doesn't work.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i, j, cont = 0, match = 0;

	p_func opt[] = {{"c", p_char}, {"s", p_str}, {"i", p_int},
	{"d", p_dint}, {0, 0}};
	if (format == 0)
		return (-1);
	va_start(valist, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]), cont++;
		else if (format[i] == '%' && format[i + 1] != 0 &&
		format[i + 1] != '%')
		{
			for (j = 0; opt[j].fmt != 0; j++)
			{
				if (format[i + 1] == opt[j].fmt[0])
				{
					cont += opt[j].f(valist);
					i++;
					match = 1;
				}
			}
			if (match != 1 )
				_putchar('%'), cont++;
			match = 0;
		}
		else if (format[i] == '%' && format[i + 1] == 0)
			return (-1);
		else if (format[i] == '%' && format[i + 1] != 0 &&
		format[i + 1] == '%' )	
		{
			_putchar('%'), cont++, i++;
		}
	}
	va_end(valist);
	return (cont);
}
