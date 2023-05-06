#include "main.h"
#include <unistd.h>
/**
 * _putchar - it help writing the character c to stdout
 * @c: a character print
 *
 * Return: print success 1
 * With error print -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
