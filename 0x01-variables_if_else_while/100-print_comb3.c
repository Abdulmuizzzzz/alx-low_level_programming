#include <stdio.h>
/**
 * main - Print all posssible combinations of three different digits
 * Return: 0
 */
int main(void)
{
	int digitc;
	int digitd = 0;

	while (d < 10)
	{
		c = 0;
	while (c < 10)
	{
		if (d != c && d < c)
		{
			putchar('0' + d);
			putchar('0' + c);


			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	d++;
	}
	putchar('\n');
}
