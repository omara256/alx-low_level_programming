#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX_2022 project
 */
typedef struct list_s
{
	int n;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const int n);
list_t *add_node_end(list_t **head, const int n);
void free_list(list_t *head);
void free_list2(list_t **head);
int pop_list(list_t **head);
list_t *get_node_at_index(list_t *head, unsigned int index);
int sum_list(list_t *head);

/**
 * insert_node_at_index - insert node at given index of linked list
 * @head: double header head
 * @index: where to insert node
 * @n: value to store in node
 * Return: new node or null if failed
 */
list_t *insert_node_at_index(list_t **head,
				unsigned int index, int n);
int delete_node_at_index(list_t **head, unsigned int index);
list_t *reverse_list(list_t **head);
size_t print_list_safe(const list_t *head);
size_t free_list_safe(list_t **h);
list_t *find_list_loop(list_t *head);
#endif
