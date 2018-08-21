/* ************************************ */
/*                                      */
/* vc_strnew.c                          */
/*                                      */
/* By: Juan, Kenta, Marla, Nagisa       */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <stdlib.h>

char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
        return (NULL);
    if  ((str = (char *)malloc((size + 1) * sizeof(char))) == NULL)
        return (NULL);
    ft_bzero(str, size + 1);
	free (str);    
}