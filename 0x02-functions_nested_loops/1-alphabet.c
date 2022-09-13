#include "main.h"

/**
 * print_alphabet - this program prints the alphabet, followed by a new line
 * @void: alphabet to be printed
 *
 * Descriptiong: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;
	
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}	
	_putchar('\n');
}
