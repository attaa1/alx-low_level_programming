#include "lists.h"

/**
 * add_nodeint -  it adds the new node at the beginning of the linked list
 * @head: the pointer to the first node in that list
 * @n: data needed to insert in the new node
 *
 * Return: the pointer to the new node or NULL when it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
