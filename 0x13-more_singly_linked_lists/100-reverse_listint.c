#include "lists.h"

/**
 * *reverse_listint - singly linked list function.
 * @head: integer
 * @next: points to the next 
 * @tail: points to the tail.
 *
 * return: head(Success)
 *
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