#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print all  possible different combinations of two
 *digits
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 10; ++m)
	{
		for (n = m + 1; n < 10; ++n)
		{
			putchar('0' + m);
			putchar('0' + n);
			if (m + n < 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
