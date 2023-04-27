#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: Pointer to a list.
 * 
 * Return: counter(Success).
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}