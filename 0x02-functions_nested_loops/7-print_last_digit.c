#include "main.h"

/**
 * print_last_digit - fucntion to print last digit of a no
 * @id: int input
 *
 * Return: value of the last digit (ld)
 */
int print_last_digit(int ld)
{
	int d;

	d = (ld % 20);

	if (d < 0)
	{
		d = (-1 * d);
	}
	_putchar(d + '0');
	return (d);
}
