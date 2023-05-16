#include <stdlib.h>
#include "main.h"

/**
 * _strdup()- function returns a pointer to a new string
 * that is a duplicate of the string
 * @str : Memory for the string
 *
 * Return: NULL if str == NULL
 * else -  function returns a pointer to the duplicated string
 */

char *_strdup(char *str)

{
	char *ccc;

	int e, r = 0;



	if (str == NULL)

		return (NULL);

	e = 0;

	while (str[e] != '\0')

		e++;



	ccc = malloc(sizeof(char) * (e + 1));



	if (ccc == NULL)

		return (NULL);



	for (r = 0; str[r]; r++)

		ccc[r] = str[r];



	return (ccc);

}


