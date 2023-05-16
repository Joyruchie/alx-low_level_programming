#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: content and null terminated
 * Return: The function should return NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int e, jo;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = jo = 0;
	while (s1[e] != '\0')
		e++;
	while (s2[jo] != '\0')
		jo++;
	conct = malloc(sizeof(char) * (e + jo + 1));

	if (conct == NULL)
		return (NULL);
	e = jo = 0;
	while (s1[e] != '\0')
	{
		conct[e] = s1[e];
		e++;
	}

	while (s2[jo] != '\0')
	{
		conct[e] = s2[jo];
		e++, jo++;
	}
	conct[e] = '\0';
	return (conct);
}
