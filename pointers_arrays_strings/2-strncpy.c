#include "main.h"

/**
 * _strncpy _ copies most of an inputted number
 * @dest: buffer
 * @src: source string
 * @n: maximum number of bytes copied
 * Return: a pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest [index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
