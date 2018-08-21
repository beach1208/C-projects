/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By:Nagisa                            */
/*                                      */
/* ************************************ */
#include "libvc.h"

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}

