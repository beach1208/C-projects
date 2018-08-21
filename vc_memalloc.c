/* ************************************ */
/*                                      */
/* vc_memalloc.c                        */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */
#include "libvc.h"
void *vc_memalloc(size_t size)
{
  char *ptr = malloc(sizeof size);
  int i;

  for (i = 0; i < size; ++i)
  {
    ptr[i] = '\0';
  }

  return ptr;
}
