/* ************************************ */
/*                                      */
/* vc_putchar.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>

void vc_putchar(char c)
{
  // 1 = int __fd for stdout
  // &c = const void * __buf
  // sizeof c = size_t __nbyte
  write(1, &c, sizeof c);
}
