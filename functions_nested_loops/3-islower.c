#include "main.h"

/**
 * checks for lowercase character
 * @c the character being checked
 * return: 1 for lower or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
