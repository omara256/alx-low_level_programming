#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
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
typedef struct compare
{
	const void *addr;
	struct compare *next;
}addr_list;
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
 *insert_nodeint_at_index - A function that inserts a new node
 *at a given valid position
 *@head: a pointer that points to the address of the struct
 *@index: a variable that indicates where the node number n should be inserted
 *@n: a variable that contains the data to be stored in the new node
 *Return: NULL if the node does not exist. The address of the new node exists
 */
list_t *insert_node_at_index(list_t **head,
unsigned int index, int n);
int delete_node_at_index(list_t **head, unsigned int index);
list_t *reverse_list(list_t **head);
void free_listaddr(addr_list *head);
addr_list *add_nodeaddr(addr_list **head, const void *addr);
size_t print_list_safe(const list_t *head);
#endif
