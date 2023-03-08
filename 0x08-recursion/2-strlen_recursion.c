#include "main.h"
/**
 * _strlen_recursion - Returns thr length of a string.
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursions(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursions(s + 1);
	}

	return (longit);
}
