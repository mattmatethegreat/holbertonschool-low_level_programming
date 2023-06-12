#include "main.h"

/**
 * checks code
 * Return: always 0
 */

int main(void)

{

	int r;

	r = _islower('h');
	_putchar(r + '0');
	r = islower('o');
	_putchar(r + '0');
	r = _islower(100);
	_putchar(r + '0');
	_putchar('\n');
	return (0);

}
