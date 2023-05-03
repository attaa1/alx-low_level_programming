#include "lists.h"

/**
 * reverse_listint - it helps to reverse the linked list
 * @head: the pointer of the first node in that list
 *
 * Return: new list first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
