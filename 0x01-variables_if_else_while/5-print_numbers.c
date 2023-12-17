#include  <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: This program print numbers from 0-9
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
