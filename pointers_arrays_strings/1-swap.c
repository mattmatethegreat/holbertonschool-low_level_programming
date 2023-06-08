#include <stdio.h>

/**
 * swap_int - swaps values of integers
 * @a: first integer to swap
 * @b: second swapped integer
 *
 * Return: nothing
 */

void swap_int(int a*, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
