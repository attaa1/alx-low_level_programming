#include "lists.h"

/**
 * add_nodeint_end - this one adds the node at the end of the linked list
 * @head: the pointer to the first element in that list
 * @n: some data we can insert in the new element
 *
 * Return: the pointer to the new node, or NULL when it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
