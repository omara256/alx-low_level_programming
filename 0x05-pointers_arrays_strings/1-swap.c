#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: int pointer variable
 * @b: int pointer variable
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
