#include <unistd.h>

/** writes the character c
 * Return: on success 1
 * on error, -1 returned
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
