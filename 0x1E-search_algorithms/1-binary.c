#include "search_algos.h"

/**
 * binary_search - A  function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located OR
 * If value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* If the middle element is greater than the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
