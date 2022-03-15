#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0;
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
