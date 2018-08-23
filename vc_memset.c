/* ************************************ */
/*                                      */
/* vc_memset.c                          */
/*                                      */
/* By:Nagisa                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memset(void *b, int c, size_t len)
{

    for (int i = 0; i < len; i++)
    {
        ((unsigned char *)b)[i] = c;
    }
    return b;
}
