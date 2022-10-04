#include "search_algos.h"

/**
 * interpolation - searchs through an array
 * @arr: the array
 * @low: the lowest
 * @high: the highest position
 * @value: the value
 * Return: the index of the value else -1
 */
int interpolation(int *arr, int low, int high, int value)
{
	size_t pos;

	if (!arr)
		return (-1);

	if (low <= high && value >= arr[low] && value <= arr[high])
	{
		pos = low + (((double)(high - low) /
			      (arr[high] - arr[low])) * (value - arr[low]));

		printf("Value checked array[%d] = [%d]\n", (int)pos, arr[pos]);
		if (arr[pos] == value)
			return (pos);
		if (arr[pos] < value)
			return (interpolation(arr, pos + 1, high, value));
		if (arr[pos] > value)
			return (interpolation(arr, low, pos - 1, value));
	}
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
/**
 * interpolation_search - searches through an array
 * @array: the array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int r = interpolation(array, 0, size - 1, value);

	return (r);
}
