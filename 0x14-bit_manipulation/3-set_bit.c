#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a given index
 * @n: the number to modify
 * @index: The index in the number to modify
 *
 * Return: 1if it work, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
