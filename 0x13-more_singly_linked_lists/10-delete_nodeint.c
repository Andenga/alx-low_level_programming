#include "lists.h"

/**
 * delete_nodeint_at_index - function of singly linked list
 * @head: points to head
 * @index: Index of pointer
 *
 * Return: I when success.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *cur_node = NULL, *next_node = NULL;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	cur_node = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (cur_node->next == NULL)
			return (-1);
		cur_node = cur_node->next;
	}

	next_node = cur_node->next;
	cur_node->next = next_node->next;
	free(next_node);
	return (1);
}