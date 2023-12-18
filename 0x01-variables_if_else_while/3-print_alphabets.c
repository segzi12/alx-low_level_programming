#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print out alphabet using putchar function both
 *lower case amd upper case
 */
int main(void)
{
	char m = 'a', n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
