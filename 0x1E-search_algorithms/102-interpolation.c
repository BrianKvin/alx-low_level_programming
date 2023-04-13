#include "search_algos.h"
/**
* interpolation_search - function that searches for a value in a sorted array
* @array: pointer to the first element of the array to search in
* @size: number of element in array
* @value: the value to search for
* can use size_t pos = low + (((double)(high - low) /
*         (array[high] - array[low])) * (value - array[low]))
* Return: first index where value is located
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (i = 0, (r = size - 1); r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
