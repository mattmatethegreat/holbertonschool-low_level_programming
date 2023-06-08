#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elemts of an array
 * @a: Array of integers
 * @n: number of elements printed
 * Return: void
 */

void print_arary(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]};
				if (j != (n - 1))
				{
				printf(", ");
				}
				}
				printf("\n");
				}
