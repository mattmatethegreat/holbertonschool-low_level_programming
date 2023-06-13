#include "main.h"

/**
 * 6-cap_string.c capitalizes all words of a string
 * cap_string capitalizes
 * @str: the string
 * Return: A pointer to changed string
 */

char *cap_string(char *str)

{

	int index = 0;

	while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	index++;
	if (str[index - 1] == ' ' ||
	str[index - 1] == ' ' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
	index == 0)
	str[index] -= 32;
	index++;
	}
	return (str);

}
