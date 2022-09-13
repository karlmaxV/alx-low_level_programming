#include "main.h"

/**
 * print_last_digit - fucntion to print last digit of a no
 * @n: number's last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
