#include <stdio.h>
/**
 * main - Entry point of a program
 * Description: Take inpt frm users then output if post, negt or zero
 * Return: Return 0
 */

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else
	{
		printf("-98 is negative\n");
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	return (0);
}
