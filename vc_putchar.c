/* ************************************ */
/*                                      */
/* vc_putchar.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_putchar(char c)
{
  write(1, &c, sizeof c);
}
