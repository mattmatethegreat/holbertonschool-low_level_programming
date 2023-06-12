#include "main.h"

/**
 * check code
 * Return 0
 */

int main(void)
{
	itn r;

	r = _isalpha('h');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
