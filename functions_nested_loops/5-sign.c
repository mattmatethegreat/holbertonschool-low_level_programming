#include "main.h"

/*
 * prints sign of number
 * number to be checked is n
 * Return: 1 for positive, -1 for negative or zero or anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
