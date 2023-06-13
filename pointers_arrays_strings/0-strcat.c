#include "main.h"
#include <stdio.h>

/**
 * _strcat concatenates two strings using inputted numbers of bytes from src
 * @dest: the string
 * @src: second string
 * @n: number of bytes
 * Retunr: pointer to resulting string
 */

char *_strcat(char *dest, char *src)

{

	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	deest[dlen] = '\0';
	return (dest);

}
