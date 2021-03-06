/* ************************************ */
/*                                      */
/* vc_memchr.c                          */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *vc_memchr(const void *s, int c, size_t n)
{
  const char *s_copy = s;
  const char *ptr = NULL;
  int i;

  for (i = 0; i < n; i++)
  {
    if (s_copy[i] == c)
    {
      ptr = &s_copy[i];
      break;
    }
  }

  return (char *)ptr;
}
