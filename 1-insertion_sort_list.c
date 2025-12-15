#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: Pointer to the doubly linked list.
 *
 * Description: The function sorts a doubly linked list in ascending order
 * using the Insertion sort algorithm. It swaps nodes, not their values.
 * After each swap, the list is printed.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp, *insert_pos;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
current = (*list)->next;
while (current != NULL)
{
insert_pos = current;
while (insert_pos->prev != NULL && insert_pos->n < insert_pos->prev->n)
{
temp = insert_pos->prev;
if (temp->prev != NULL)
temp->prev->next = insert_pos;
else
*list = insert_pos;
temp->next = insert_pos->next;
if (insert_pos->next != NULL)
insert_pos->next->prev = temp;
insert_pos->prev = temp->prev;
temp->prev = insert_pos;
insert_pos->next = temp;
print_list(*list);
insert_pos = insert_pos->prev;
}
current = current->next;
}
}
