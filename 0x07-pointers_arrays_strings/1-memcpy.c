#include "main.h"
#include <stdio.h>

/**
 * A function that copies memory data.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
    
}