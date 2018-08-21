/* ************************************ */
/*                                      */
/* vc_strsub.c                          */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */
#include "libvc.h"

char *vc_strsub(char const *s, size_t start, size_t len)
{
    char *result = malloc(sizeof(char)*(len + 1));
    int i;
    for(i = 0; i < len; i++)
    {
        result[i] = s[start + i];
    }
    result[len] = 0;
    return result;
}