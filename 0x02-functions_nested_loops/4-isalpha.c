#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point of the program of integer  c
 * Return: Return 1,  if lower case or uppercase otherwise 0
 * Deescription: Takes interger c as input then return a value if lower case
 *uppercase and otherwise return another value if not
 * @c: The parameter reprsenting chracter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return  (1);
	}
	else
	{
		return (0);
	}
}
