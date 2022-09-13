#include "main.h"

/**
 * _islower - function that checks for lowercase
 * @c: character to be sorted
 *
 * Return: 1 if c is lowercase, and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
