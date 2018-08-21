/* ************************************ */
/*                                      */
/* vc_bzero.c                           */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include "libvc.h"

void vc_bzero(void *s, size_t n)
{
  char *c = s;
  c = malloc(sizeof n);
  int i;

  for (i = 0; i < n; ++i)
  {
    c[i] = '\0';
  }

  free(c);
}
