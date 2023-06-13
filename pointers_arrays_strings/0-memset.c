#include "main.h"

/**
 * _memset - entry
 * @s: destination
 * @b: constant
 * @n: bytes
 * Return: Always 0 (Success)
 */

char *memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}