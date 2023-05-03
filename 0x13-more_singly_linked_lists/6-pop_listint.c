#include "lists.h"

/**
 * pop_listint - it helps to delete the head node of the linked list
 * @head: the pointer to first element in that linked list
 *
 * Return: data deleted inside the elements,
 * or 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
