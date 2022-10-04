#include "search_algos.h"
/**
 * linear_search - searchs for value in a given array linearly
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: returns the index of the first value found else returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index,
		       *(array + index));
		if (*(array + index) == value)
			return (index);
	}
	return (-1);
}
