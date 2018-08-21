/* ************************************ */
/*                                      */
/* vc_strsub.c                          */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */

typedef unsigned int size_t;
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