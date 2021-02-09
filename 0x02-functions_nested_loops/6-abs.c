#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @n: number in use
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	return (n * (-1));
}
