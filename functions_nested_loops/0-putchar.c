#include <unistd.h>

/**
 * _putchar writes the character c
 * @c: the character
 * Return: on success 1
 * on error return -1
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
