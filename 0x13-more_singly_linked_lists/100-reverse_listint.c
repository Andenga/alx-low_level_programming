#include "lists.h"

/**
 * reverse_listint - reverses  list.
 * @head: head .
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *y;
	listint_t *x;

	y = NULL;
	x = NULL;

	while (*head != NULL)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}

	*head = y;
	return (*head);
}