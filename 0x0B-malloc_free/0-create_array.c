#include "main.h"
#include <stdlib.h>


/**
 * Creates an array of chars
 */


char *create_array(unsigned int size, char c)
{
	char *cra;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cra = malloc(sizeof(c) * size);

	if (cra == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cra[i] = c;

	return (cra);
}
