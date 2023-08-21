#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found or
 *         if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

	return 0;
}
