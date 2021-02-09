#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number in use
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
