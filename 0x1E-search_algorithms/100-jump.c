#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search through an array using jump search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the found value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int j, i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       i, array[i]);
		i += jump;
		if (i >= (int)size)
			break;
	}
	j = i - jump;
	printf("Value found between indexes [%d] and [%d]\n",
	       j, i);
	while (j <= i)
	{
		printf("Value checked array[%d] = [%d]\n",
		       j, array[j]);
		if (array[j] == value)
			return (j);
		if (j >= (int)size - 1)
			break;
		j++;
	}
	return (-1);

}
