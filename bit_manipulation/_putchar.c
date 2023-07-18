#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * c: character printed
 * return: 1 on success
 * error show -1 and errno shows error
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
