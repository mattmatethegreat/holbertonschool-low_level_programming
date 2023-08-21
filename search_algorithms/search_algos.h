#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 *                 Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not
 *         present in the array or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value);

/**
 * print_array - Prints the elements of an array between two indices.
 * @array: Pointer to the first element of the array.
 * @low: The starting index.
 * @high: The ending index.
 */
void print_array(int *array, size_t low, size_t high);

#endif
