#include "main.h"

/**
 * 5-strng_toupper.c - changes lowercase letters to uppercase
 * @str: The strign to change
 * Return: a pointer to changed string
 */

char *string_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
