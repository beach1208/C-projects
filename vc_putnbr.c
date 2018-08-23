/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By:Nagisa                            */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}
