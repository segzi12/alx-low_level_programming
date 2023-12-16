#include <stdio.h>

/*
 * main - Entry point of the program
 * Description: print the size of all data types(int,float,char,...)
 * Return: This return 0
 */

int main(void)
{
	printf("Size of a char: %c\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long int));
	printf("Size  of a long long int: %d\n", sizeof(long long int));
	printf("Sizeof a float: %d", sizeof(float));
	return (0);
}
