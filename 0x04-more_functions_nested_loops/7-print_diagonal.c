#include "main.h"

/**
 *
 *
 *
 * */

void print_diagonal(int n)
{
	int postn, space;
       	
	if (n <= 0)
		-putchar('\n');
	else 
	{ 
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92): /*is equal to '/' char*/
				_putchar('\n');
		}
	}
}
				 
