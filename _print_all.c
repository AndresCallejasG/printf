#include "holberton.h"
#include <stdarg.h>
/**
 * p_char - Prints a character
 * @valist: va_list
 * Return: none
 **/
int p_char(va_list valist)
{
	_putchar(va_arg(valist, int));

	return (1);
}
/**
 * p_float - Prints a float
 * @valist: va_list
 * Return: none
 **/
int p_float(va_list valist)
{
	double num = va_arg(valist, double);

	return (num / 1);
}
/**
 * p_int - Prints a int
 * @valist: va_list
 * Return: none
 **/
int p_int(va_list valist)
{
	int size = 0;

	int num = va_arg(valist, int);

	size = print_int(num);

	return (size);
}
/**
 * p_str - Prints a str
 * @valist: va_list
 * Return: none
 **/
int p_str(va_list valist)
{
	char *str;
	int i;

	str = va_arg(valist, char *);

	if (str == 0)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
