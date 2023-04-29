#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*Next node*/
		h = h->next;
		/*count*/
		node_count++;
	}

	/*last node*/
	printf("%d\n", h->n);

	return (node_count);
}