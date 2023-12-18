#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print all possible combination of single digit
 *numbers, seperated by comma
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
		if (n <= 9)
		{
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
