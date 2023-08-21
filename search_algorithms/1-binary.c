#include "search_algos.h"

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
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t mid;

    if (array == NULL)
        return -1;

    while (low <= high)
    {
        printf("Searching in array: ");
        print_array(array, low, high);

        mid = low + (high - low) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

/**
 * print_array - Prints the elements of an array between two indices.
 * @array: Pointer to the first element of the array.
 * @low: The starting index.
 * @high: The ending index.
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t i;

    for (i = low; i <= high; i++)
    {
        if (i == high)
            printf("%d", array[i]);
        else
            printf("%d, ", array[i]);
    }

    printf("\n");
}
