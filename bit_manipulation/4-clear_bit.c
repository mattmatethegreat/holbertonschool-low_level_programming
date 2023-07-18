#include "main.h"

/**
 * clear_bit sets value of bit to 0
 * x is pointer for changed number
 * index is for the bit
 * return 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
	return (-1);
	
	*x = (~(1UL << index) & *x);
	return (1);
}
