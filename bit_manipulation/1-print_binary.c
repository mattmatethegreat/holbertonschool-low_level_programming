#include "main.h"

/**
 * print_binary - prints binary decimal
 * x is number to print
 */

void print_binary(unsigned long int x)
{
	
	int i, count = 0;
	unsigned long int current;
	
	for (i = 63; i >= 0; i--)
	{
	
	current = x >> i;
	
	if (current & 1)
	{

	_putchar('1');
	count++;
	}

	else if (count)
		_putchar('0');
	}
	
	if (!count)
	_putchar('0');
}
