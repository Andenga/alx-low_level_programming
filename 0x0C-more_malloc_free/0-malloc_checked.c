#include <stdlib.h>
/**
  * Allocate memory using malloc.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}