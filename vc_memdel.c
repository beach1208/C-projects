/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */

void vc_memdel(void **ap)
{
    free(ap);
    ap[0] = '\0';
}