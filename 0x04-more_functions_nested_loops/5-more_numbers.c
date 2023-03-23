#include "main.h"

/**
* print_number -prints 10 times the numbers from 0 to 9
* 10 times
* Return: void
*/

void print_numbers(void);
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar(48 + (a / 10));
			_putchar(48 + (a % 10));
		}
	}
	_putchar('\n');
}
