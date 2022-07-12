#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
