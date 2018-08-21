/* ************************************ */
/*                                      */
/* putstr.c                             */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

#include <stdio.h>

void putstr(char *str)
{
  while (*str != '\0')
    putchar(*str++);
}
