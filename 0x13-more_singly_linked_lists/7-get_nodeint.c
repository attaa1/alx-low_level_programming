#include "lists.h"

/**
 * get_nodeint_at_index - puts the node at a certain index in linked list
 * @head: the first node in the linked list
 * @index: the index of that node
 *
 * Return: the pointer to that node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
