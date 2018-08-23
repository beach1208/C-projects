/* ************************************ */
/*                                      */
/* vc_memmove.c                         */
/*                                      */
/* By:Nagisa                            */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void *vc_memmove(void *dst, const void *src, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    }
    return dst;
}
