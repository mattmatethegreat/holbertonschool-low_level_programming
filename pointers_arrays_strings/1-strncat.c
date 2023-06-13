#include "main.h"

/**
 * strncat concatenates two strings using inputted numbers of bytes from src
 * @dest: the string
 * @src: second string
 * @n: number of bytes
 * Retunr: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)

{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);

}
