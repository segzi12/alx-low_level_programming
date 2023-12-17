#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print the alphabet in lowercase
 *exclude alphabet q and e
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' && n == 'q')
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}

