#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 *  nmemb or size is 0, returns NULL.
 *  malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *e;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	e = malloc(nmemb * size);

	if (e == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		e[j] = 0;

	return (e);

}
