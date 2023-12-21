#include "main.h"
#include <ctype.h>
/**
 * print_sign - Entry point of the program
 * @n: The integer parameter
 * Return: Return 1, if greater than 0 and 0 if is 0 otherwise -1  is less
 *than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
