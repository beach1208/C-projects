/* ************************************ */
/*                                      */
/* vc_isascii.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isascii(int c)
{
  int result = 0;
  if (c > 0 && c < 127)
  {
    result = 1;
  }
  return result;
}
