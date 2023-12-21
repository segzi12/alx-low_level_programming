#include "main.h"
/**
 * print_alphabet_x10 - Entry of the program
 * Description: This function doees not have a return value
 *when called, it prints the alphabets to the console
 */
void print_alphabet_x10(void)
{
	char let;
	int space;

	for (space = 1; space < 11; space++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
