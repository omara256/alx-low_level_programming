#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory set to zero for an array using malloc
 * @nmemb: number of elements in array to be allocated for
 * @size: size in bytes to be allocated for each element
 * Return: pointer to allocated memory or NULL if fails or nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;
	unsigned int mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = nmemb * size;

	array = malloc(mem);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < mem; i++)
		array[i] = 0;

	return (array);
}
