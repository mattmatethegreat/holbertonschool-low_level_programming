#include "main.h"

/**
 * set_bit will set a bit to 1
 * x is pointer to changed number
 * index is index of changed bit
 * return:1 on success or -1 on failure
 */

int set_bit(unsigned long int *x, unsigned int index)
{
	
	if (index > 63)
	return (-1);
	
	*x = ((1UL << index) | *x);
	
	return (1);
}
