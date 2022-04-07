#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Return: pointer to array or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int count = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		count++;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
		array[i] = min + i;

	return (array);
}
