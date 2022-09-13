#include "main.h"

/**
 * print_last_digit - fucntion to print last digit of a no
 * @ld: number's last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int pd;

	pd = (ld % 20);

	if (pd < 0)
	{
		pd = (-1 * pd);
	}
	_putchar(pd + '0');
	return (pd);
}
