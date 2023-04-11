#include "main.h"
#include <stdlib.h>

/**
 * concatenate args.
 */
char *argstostr(int ax, char **av)
{
	char *aout;
	int x, i, j, ia;

	if (ax == 0)
	{
		return (NULL);
	}
	for (x = i = 0; i < ax; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			x++;
		x++;
	}

	aout = malloc((x + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < x; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < x - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';

	return (aout);
}