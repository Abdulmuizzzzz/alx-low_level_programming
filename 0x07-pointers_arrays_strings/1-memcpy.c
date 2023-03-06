#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
