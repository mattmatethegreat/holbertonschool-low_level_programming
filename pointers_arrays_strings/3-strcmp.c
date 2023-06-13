#include "main.h"

/**
 * _strcmp - compares pointers to strings
 * @s1: points to first string to compare
 * @s2: points to second string to compare
 * Return: if str1 < str2, negative difference
 * if str1 == str2, 0
 * if str1 > str2, positive difference
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
