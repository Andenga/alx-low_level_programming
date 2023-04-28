#include "lists.h"

/**
 * find_listint_loop - finds the loop.
 * @head: head .
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x2;
	listint_t *pr;

	x2 = head;
	pr = head;
	while (head && x2 && x2->next)
	{
		head = head->next;
		x2 = x2->next->next;

		if (head == x2)
		{
			head = pr;
			pr =  x2;
			while (1)
			{
				x2 = pr;
				while (x2->next != head && x2->next != pr)
				{
					x2 = x2->next;
				}
				if (x2->next == head)
					break;

				head = head->next;
			}
			return (x2->next);
		}
	}

	return (NULL);
}