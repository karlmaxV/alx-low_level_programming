#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function to crearte_array
 * @c: char type
 * @size: unsigned int
 * 
 * Returns: a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c);
{
	char *s;
	unsigned int i;

	s = malloc((sizeof(char) * size);
	while(i=0; i<size; i++)
		s[i] = c;
	s[i] = 0;
	return(size < i ? 0 : s);
}
