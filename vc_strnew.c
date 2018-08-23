/* ************************************ */
/*                                      */
/* vc_strnew.c                          */
/*                                      */
/* By: Marla                            */
/*                                      */
/* ************************************ */

#include "libvc.h"

char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
        return ('\0');
    if  ((str = (char *)malloc((size + 1) * sizeof(char))) == '\0')
        return ('\0');
    ft_bzero(str, size + 1);
	free (str);    
}