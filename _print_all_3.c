#include "holberton.h"

/**
 * p_rot13 - encodes a string using rot13.
 *
 * @valist: string
 *
 * Return: number of bytes printed.
 */
int p_rot13(va_list valist)
{
	int i, aux;
	char *s;

	s = va_arg(valist, char *);

	i = 0;
	aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			aux = 13 + s[i];
			if ((aux > 'Z' && s[i] <= 'Z') || aux > 'z')
			{
				aux = aux % (90 + (32 * (97 / s[i])));
				aux = aux + (65 + (32 * (97 / s[i]))) - 1;
			}
			_putchar(aux);
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (i);
}
