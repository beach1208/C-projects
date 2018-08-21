/* ************************************ */
/*                                      */
/* vc_isalnum.c                         */
/*                                      */
/* By: Marla, Juan, Nagisa, Kenta       */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_isalnum(int c)
{
  int result = 0;

  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
  {
    result = 1;
  }

  return result;
}
