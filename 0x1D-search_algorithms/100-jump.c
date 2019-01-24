#include "search_algos.h"

/**
 * jump_search - searching algorithm
 * @array: array of integers, sorted
 * @size: size of the array
 * @value: key value to match an element of the array
 *
 * Description: Using a jump search algorithm to find matching value
 * Return: -1 if not found or index to the matched value
 */
int jump_search(int *array, size_t size, int value)
{
	int sq_root = sqrt(size);
	size_t i, j;

	for (i = 0; i < size; i = i + sq_root)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%li] and [%li]\n", i - sq_root, i);
	j = i;
	i -= sq_root;
	for (; i <= j; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (value > array[j])
			break;

	}
	return (-1);
}
