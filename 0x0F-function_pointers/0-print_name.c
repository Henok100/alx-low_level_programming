#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name: name;
 * @f: A pointer to a function that prints a name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
