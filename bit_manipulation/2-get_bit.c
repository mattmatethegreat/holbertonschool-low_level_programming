#include "main.h"

/**
 * get_bit - returns value of index bit in decimal
 * x is number to search
 * index is for the bit index
 * return bits value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	
	int bit_val;
	
	if (index > 63)
	return (-1);
	
	bit_val = (x >> index) & 1;
	
	return (bit_val);
}
