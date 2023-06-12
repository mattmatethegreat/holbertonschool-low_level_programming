#include "main.h"

/**
 * computes an integers absolute value
 * number to be computed is c
 * return the absolute value of number zero
 */

int _abs(int c)

{

	if(c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
