#include "holberton.h"
/**
* print_un_int - prints an unsigned integer char by char
* @n: The integer to print
*
* Return: number of chars printed
**/
int print_un_int(unsigned int n)
{
	unsigned int i, size;
	unsigned int num, num_temp, dig, div;

	num = n;
	size = 0;
	div = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
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
