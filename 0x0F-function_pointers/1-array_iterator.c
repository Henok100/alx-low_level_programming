#include "function_pointers.h"
#include <stdlib.h>

/**
 * on each element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int h;

	if (!array || !action)
		return;

	for(h = 0; h < size; h++)
		action(array[h]);
}
