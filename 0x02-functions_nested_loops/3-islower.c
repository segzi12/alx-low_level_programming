#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point of the program that checks integer c
 * @c: The  integer parameter
 * Return: Return 1, if lower case and 0 if otherwise
 * Description: This program takes parameter c as an integer and check
 *if lowercase or not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
