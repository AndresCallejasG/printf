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

	return (size);
}
