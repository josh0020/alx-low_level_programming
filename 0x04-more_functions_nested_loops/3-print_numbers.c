#include "main.h"

/**
* _putchar - tests function tha prints the numbers from 0 to 9 followed by \n
* @a input
* Return: void
*/

void print_numbers(void);
{
        int a ;

	for (a = 48; a < 58; a++ )
	{
		_putchar(a);
	}
	_putchar('\n');
}
