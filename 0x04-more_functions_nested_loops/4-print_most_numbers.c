#include "main.h"

/**
* print_number -  prints the numbers from 0 to 9 execpt 2 and 4
* @a: input
* Return: void
*/

void print_most_numbers(void);
{
        int a ;

        for (a = 48; a < 58; a++ )
        {
		if (a == 50 && a == 52)
			break;
                _putchar(a);
        }
        _putchar('\n');
}
