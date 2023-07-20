#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of intergers
 * @size: array size
 * @cmp: fuction to execute on the array
 * Return: Index (int)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[index - size]))
			return (index - size);
	}

	return (-1);
}

