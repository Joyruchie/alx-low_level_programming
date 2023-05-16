#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of chars,
 * and initialize it with a specific char
 * @size:  size of array
 * @c: character  to work on
 *
 * Return: If size = 0, return null,
 * a pointer to array if null fails
 */

char *create_array(unsigned int size, char c)
{
	char *std;

	unsigned int e;



	std = malloc(sizeof(char) * size);

	if (size == 0 || std == NULL)

		return (NULL);



	for (e = 0; e < size; e++)

		std[e] = c;

	return (std);

}

