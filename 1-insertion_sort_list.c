#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: pointer to head of list
 * @left: first node
 * @right: second node
 */
static void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
if (left->prev)
left->prev->next = right;
else
*list = right;
if (right->next)
right->next->prev = left;
left->next = right->next;
right->prev = left->prev;
right->next = left;
left->prev = right;
}
/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *tmp;
if (!list || !*list || !(*list)->next)
return;
current = (*list)->next;
while (current)
{
tmp = current;
current = current->next;
while (tmp->prev && tmp->n < tmp->prev->n)
{
swap_nodes(list, tmp->prev, tmp);
print_list(*list);
}
}
}
