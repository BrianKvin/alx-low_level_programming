#include "search_algos.h"

/**
* linear_search - algorithm that searches for a value in an array of integers
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* the function must return the first index where value is located
* recurse_helper -recursive implementation of linear search
* print the value everytime you compare it in the array
* Return: -1  if value is not present in array or if array is Null
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
