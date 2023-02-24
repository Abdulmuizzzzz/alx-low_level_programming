#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character in c to stdout
 * @c: charcter to be used
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
