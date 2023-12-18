#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print out hexadecimanl numbers
 *starting from(0..f)
 */
int main(void)
{
	int n = 0;
	char m =   'a';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
