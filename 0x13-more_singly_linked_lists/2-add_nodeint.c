#include <stdio.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer of the head node.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
