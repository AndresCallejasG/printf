#include "holberton.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: length of s
*/

int _strlen(char *s)
{

	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
/**
* print_int - prints an integer char by char
* @n: The integer to print
*
* Return: void
*/
int print_int(int n)
{
	int i, size;
	unsigned int num, num_temp, dig, div;

	num = n;
	size = 0;
	div = 1;

	if (n < 0)
	{
		num = num * -1;
		_putchar(45);
	}

	num_temp = num;
	while (num_temp != 0)
	{
		size++;
		num_temp /= 10;
	}
	for (i = 1; i < size; i++)
	{
		div = div * 10;
	}
	for (i = size - 1; i >= 1; i--)
	{
		dig = num / div;
		_putchar((dig % 10) + '0');
		div /= 10;
	}
	_putchar((num % 10) + '0');

	if (n < 0)
		return (size + 1);
	else if (n == 0)
		return (1);
	return (size);
}

/**
* base_conv - prints a string, in reverse
* @num: int num
* @base: base to convert
* @mayus: for hex conversion - %x = 0 %X = 1
*
* Return: void
*/

int base_conv(unsigned int num, int base, int mayus)
{
	char chars[] = "0123456789ABCDEF";
	char chars2[] = "0123456789abcdef";
	char buffer[1024];
	char *ptr;
	int i = 1023, j = 0;

	ptr = &buffer[1023];
	*ptr = '\0';

	do {
		if (mayus)
			*--ptr = chars[num % base];
		else
			*--ptr = chars2[num % base];
		num /= base;
		i--;
	} while (num != 0);

	for (j = i; buffer[j] != '\0'; j++)
	{
		_putchar(buffer[j]);
	}

	return (1023 - i);
}
