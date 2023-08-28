#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head node of the list.
 *
 * The function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
}
