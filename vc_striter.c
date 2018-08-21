/* ************************************ */
/*                                      */
/* vc_striter.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_striter(char *s, void (*f)(char))
{
  int i;
  i = 0;
  while (*s)
  {
    (*f)(s[i]);
    i++;
    s++;
  }
}
