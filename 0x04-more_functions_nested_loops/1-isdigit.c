#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @n: the number to be checked
 * Return: 1 for character that will be a digit or 0 for any size
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}

	return (0);
}
