#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
size_t num = 0;
listint_t *current, *next;

if (head == NULL || *head == NULL)
return (num);

current = *head;
while (current != NULL)
{
num++;
next = current->next;
current->next = NULL;
free(current);
if (next >= current)
{
*head = NULL;
return (num);
}
current = next;
}
*head = NULL;
return (num);
}
