#include <stdio.h>
#include "sort.h"

/**
 * swap_node - Swap two nodes in a listint_t
 * @head: A pointer to the head.
 * @n: A pointer to the first node to swap.
 * @n1: The second node to swap.
 * Return: void
 */
void swap_node(listint_t **head, listint_t **n, listint_t *n1)
{
	(*n)->next = n1->next;
	if (n1->next != NULL)
		n1->next->prev = *n;
	n1->prev = (*n)->prev;
	n1->next = *n;
	if ((*n)->prev != NULL)
		(*n)->prev->next = n1;
	else
		*head = n1;
	(*n)->prev = n1;
	*n = n1->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using the insertion sort algorithm.
 * @list: A pointer to the head
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *it, *in, *point;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (it = (*list)->next; it != NULL; it = point)
	{
		point = it->next;
		in = it->prev;
		while (in != NULL && it->n < in->n)
		{
			swap_node(list, &in, it);
			print_list((const listint_t *)*list);
		}
	}
}
