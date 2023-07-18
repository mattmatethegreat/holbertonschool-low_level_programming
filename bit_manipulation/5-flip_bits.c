#include "main.h"

/**
 * flip_bits - counts number of changed bits
 * x is first number
 * y is second number
 * return number of changed bits
 */

unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;
	
	for (i = 63; i >= 0; i--)
	{
		
		current = exclusive >> i;
		if (current & 1)
		count++;
													}

						return (count);
}
