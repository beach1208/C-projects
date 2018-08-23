/* ************************************ */
/*                                      */
/* vc_memdel.c                          */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_memdel(void **ap)
{
    free(ap);
    ap[0] = '\0';
}