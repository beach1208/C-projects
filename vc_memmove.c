/* ************************************ */
/*                                      */
/* vc_memmove.c                         */
/*                                      */
/* By:Nagisa                            */
/*                                      */
/* ************************************ */
#include "libvc.h"
void *vc_memmove(void *dst, const void *src, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    }
    return dst;
}
