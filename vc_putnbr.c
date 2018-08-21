/* ************************************ */
/*                                      */
/* vc_putnbr.c                 */
/*                                      */
/* By:Nagisa           */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}

