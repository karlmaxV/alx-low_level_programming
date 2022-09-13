#include "main.h"

/**
 * _abs - function to compute absolute values
 *@ab: int input value
 *
 *Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
