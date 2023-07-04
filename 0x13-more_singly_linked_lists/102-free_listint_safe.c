#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (count);

current = *h;
while (current != NULL)
{
count++;
if (current->next >= current)
{
current = current->next;
break;
}
temp = current;
current = current->next;
free(temp);
}

*h = NULL;
return (count);
}
