#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print out alphabet in lowercase
 *using the putchar function
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


