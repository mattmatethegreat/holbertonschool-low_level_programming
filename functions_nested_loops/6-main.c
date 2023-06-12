#include "main.h"
#include <stdio.h>

/**
 * checks code
 * returns always 0
 */

int main(void)
{

	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r + _abs(0);
	printf("%d\n", r);
	r = abs(1);
	printf("%d\n", r);
	r = abs(-98);
	printf("%d\n", r);
	return (0);
}
