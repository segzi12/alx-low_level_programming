#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: prints out alphabet in lowercase and it should
 *be reversed (z..a)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
