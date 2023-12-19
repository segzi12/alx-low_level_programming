#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print only smallest combination of thrree digits
 *numbers should be in ascending order
 *the three digits must be different
 */
int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; ++m)
	{
		for (n = m + 1; n < 10; ++n)
		{
			for  (o = n + 1; o < 10; ++o)
			{
				putchar('0' + m);
				putchar('0' + n);
				putchar('0' + o);
				if (m + n + o < 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
