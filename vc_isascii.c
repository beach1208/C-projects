/* ************************************ */
/*                                      */
/* vc_isascii.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include "libvc.h"

int vc_isascii(int c)
{
  int result = 0;
  if (c > 0 && c < 127)
  {
    result = 1;
  }
  return result;
}
