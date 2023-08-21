#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is
 *         not present in the array or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value);

#endif
