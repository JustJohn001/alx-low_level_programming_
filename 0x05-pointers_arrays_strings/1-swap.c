#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: First integer
 * @b: Second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
