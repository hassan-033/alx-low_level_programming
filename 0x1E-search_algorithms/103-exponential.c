#include "search_algos.h"
/**
 * binary_search_recursive - search through an array using binary search
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be searched
 * @left: left side start point of the array to be searched
 * @right: right side end poin of the array to be searched
 * Return: returns the index of the first value found else returns -1
 */
int binary_search_recursive(int *array, size_t size,
			     int value, int left, int right)
{
	int mid = (left + right) / 2, i;

	if (!array)
		return (-1);
	if (left > right || right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == left)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_recursive(array, size, value,
						left, mid - 1));
	else
		return (binary_search_recursive(array, size, value,
						mid + 1, right));
}
/**
 * exponential_search - searches through an array using the exponential_search
 * @array: the array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value else -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, higher;

	if (!array)
		return (-1);
	if (size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)bound, array[bound]);
	    bound *= 2;
	}
	if (bound >= size)
		higher = size - 1;
	else
	    higher = bound;
	printf("Value found between indexes [%d] and [%d]\n", (int)bound / 2,
	       (int)higher);
	int res = binary_search_recursive(array, size, value, bound / 2, higher);

	return (res);
}
