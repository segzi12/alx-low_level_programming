#include <stdio.h>
/**
 * main - Entry point of a program
 * Description: Take inpt frm users then output if post, negt or zero
 * Return: Return 0
 */

int main(void)
{
	int n;

	printf("Enter a random number:");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
