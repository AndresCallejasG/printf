#include "holberton.h"
/**
* p_rev - prints a string, in reverse
* @valist: string
*
* Return: void
*/
int p_rev(va_list valist)
{
	int i, j, count = 0;
	char *s;

	s = va_arg(valist, char *);

	i = 0;
	j = 0;

	if (s == '\0')
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
		count++;
	}
	return (count);
}
/**
* p_bin - prints a unsigned int as binary
* @valist: string
*
* Return: void
*/
int p_bin(va_list valist)
{
	int size = 0;

	int num = va_arg(valist, int);

	size = base_conv(num, 2, 0);

	return (size);
}
/**
* p_oct - prints a unsigned int as octal
* @valist: string
*
* Return: void
*/
int p_oct(va_list valist)
{
	int size = 0;

	int num = va_arg(valist, int);

	size = base_conv(num, 8, 0);

	return (size);
}
/**
* p_hex - prints a unsigned int as hexadecimal
* with lowercase letters
* @valist: string
*
* Return: void
*/
int p_hex(va_list valist)
{
	int size = 0;

	int num = va_arg(valist, int);

	size = base_conv(num, 16, 0);

	return (size);
}
/**
* p_hex_case - prints a unsigned int as hexadecimal
* with uppercase letters
* @valist: string
*
* Return: void
*/
int p_hex_case(va_list valist)
{
	int size = 0;

	int num = va_arg(valist, int);

	size = base_conv(num, 16, 1);

	return (size);
}



