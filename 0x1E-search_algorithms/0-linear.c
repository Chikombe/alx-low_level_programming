#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located OR
 * If value is not present in array or if array is NULL,return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}
