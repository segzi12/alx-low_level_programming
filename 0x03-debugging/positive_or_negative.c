#include <stdlib.h>
#include "main.h"
/**
  * positive_or_negative - Entry of the program
  * Description: This program checks if  a number  is positive or negative
  *and zero
  */
void positive_or_negative(int i)
{	
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
