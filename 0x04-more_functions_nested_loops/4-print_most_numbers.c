#include "main.h"

/**
 * print_most_number - prints the number, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i !=2 && i ! = 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
