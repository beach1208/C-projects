/* ************************************ */
/*                                      */
/* vc_putstr.c                          */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_putstr(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
