#include "main.h"

/**
 * print_alphabet - prints the alphabet, followed by a newline
 * @void: alphabet to be printed
 *
 * Descriptiong: Function prints the alphabet in lowercase, followed by newline
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
