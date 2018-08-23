/* ************************************ */
/*                                      */
/* vc_strdup.c                          */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strdup(char *src)
{
    char *dst;
    int i;

    i = 0;
    while (src[i])
        i++;
    if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
        return '\0';
    i = -1;
    while (src[++i])
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}
