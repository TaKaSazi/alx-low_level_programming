#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: an input for the size of the array in int
 * @c: to store the strings of character
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
