#include "holberton.h"

/**
 * print_sign - to print sign of number
 * @n: the number in use
 *
 * Return: -1 if negative, 0 if zero , 1 if positive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
