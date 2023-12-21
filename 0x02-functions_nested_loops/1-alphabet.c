#include  "main.h"
/**
 * main - Entry of the program
 * Return: Return 1
 * _putchar - print the value in the variable let
 * Description: print the alphabet
 *from a-z
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
