#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index
 * @index: index of the bit
 * @n: pointer of unsignrd long int
 * Return: on success 1, failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);

	return (1);
}
