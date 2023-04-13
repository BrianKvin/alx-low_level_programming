#include "search_algos.h"
/**
* jump_search - reaches for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: is the value to search for
* must use square root of the size of array as the jump step
* Return: the first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld\n", i, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : - 1);
}
