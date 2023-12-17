#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Return 0
 * Description: print nums frm 0-9 using the
 *putchar function
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
