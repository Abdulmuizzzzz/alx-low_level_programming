#include <stdlib.h>
#include <stdio.h>

/**
 * main - find and print the largest prime factor of the num 612852475143
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, max;

	while (max < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (max = 3; max < (prime / 2); max += 2)
		{
			if ((prime % max) == 0)
				prime /= max;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
