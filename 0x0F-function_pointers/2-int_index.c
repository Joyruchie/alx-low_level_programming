#include "function_pointers.h"

/**
 * int_indent - function that search for integer
 * @array: pointer to array
 * @size: number of element in the array
 * @cmp: function to be used to compare values
 *
 * Return: returns the index of the first element
 *              if no element matches - -1
 *		else if size <= 0 - -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
