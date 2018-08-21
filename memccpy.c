/* ************************************ */
/*                                      */
/* strrchr.c                            */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */
#include "libvc.h"
void *memccpy (void *dest, const void *src, int c, size_t n)
{
    char *c1 = (char *)src;
    char *c2 = (char *)dest;

    for (int i = 0; i < n; i++)
    {
        if(c1[i] == c)
        {
            c2[i] = c1[i]; 
            c2[i + 1] = '\0';
        break;
        }
        else
        {
            c2[i] = c1[i];
        }
    }
}
