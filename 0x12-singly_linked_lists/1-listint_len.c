#include "lists.h"

/**
 * list_len - find the number of elements in a linked `list_t` list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
