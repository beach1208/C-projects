/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    free(as);
    as[0] = '\0';
}

