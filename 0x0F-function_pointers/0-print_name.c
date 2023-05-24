#include  "function_pointers.h"


/**
* print_name - function that prints a name
* @name: name to be printed
* @f: the pointer to  the function
*
* return: nothing
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)

	return;

	f(name);
}
