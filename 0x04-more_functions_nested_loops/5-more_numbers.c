#include "main.h"

/**
* _putchar - tests function tha prints 10 times the numbers from 0 to 9 folowed by \n
* @a input
* @b input 
* Return: void
*/

void print_numbers(void);
{
        int a, b ;

	for (b = 0;b < 10; b++)
	{
        	for (a = 0; a < 15; a++ )
        	{
			if (a >= 10)
				_putchar(48 +(a/10));
                	_putchar(48 +(a % 10));
        	}
        }
	_putchar('\n');
}
