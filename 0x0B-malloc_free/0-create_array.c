#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function to crearte_array
 * @c: char type
 * @size: unsigned char
 * 
 * Returns: a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c);
{
	char *s;
	int i;

	if(size == 0){
		return(NULL);
	}
	s = malloc((size), sizeof(char));
	if(s == NULL){
		return(NULL);
	}
	while(i=0; i<size; i++){
		s[i] = c;
	}
	s[i] = '\0';
	return(s);
}
