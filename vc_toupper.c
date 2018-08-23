/* ************************************ */
/*                                      */
/* vc_toupper.c                         */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_toupper(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
      return 0;
  return 1;
}
