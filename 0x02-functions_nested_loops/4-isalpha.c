#include "holberton.h"

/**
 * _isalpha - function checks for both lowercase and uppercase character
 * @c: The character to check
 *
 * Return: 1 if matches, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90) || (c >= 97) && (c <=122))
		return (1);
	return (0);
}
