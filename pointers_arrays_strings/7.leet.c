#include "main.h"

/**
 * 1-leet.c encodes a string into 1337
 * @c string
 * Return: string chat
 */

char *leet(char *c)

{

	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {3, 2, 0, 7, 1};
	unsigned int i;

	while (*c)

	{

		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is difference between lowar case and appear case letters*/
			if (*c == key[i] || *c == key[i] + 32)
			{
			*c = 48 + value[i];
			}
		}
		c++;
	}

	return (cp);
}
