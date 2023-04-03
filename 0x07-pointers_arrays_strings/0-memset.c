#include "main.h"
#include <string.h>

/**
 * Fills the memory with a constant byte.
 */

char *_memset(char *s, char b, unsigned int n){
    
    unsigned int x;

    for(x = 0; x < n; x++){
        s[x] = b;
    }

    return (s);
}