#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 * @void: characters to be printed
 *
 * Description: Print the alphabet 10 times, followed by a newline
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, a;

	a = 0;

	while (a < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		a++;
		_putchar('\n');
	}
}

