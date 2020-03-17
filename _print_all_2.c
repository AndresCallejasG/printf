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
