/* ************************************ */
/*                                      */
/* vc_isalpha.c                         */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isalpha(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (!((str[i] >= 'A' && str[i] <= 'Z') \
          || (str[i] >= 'a' && str[i] <= 'z')))
      return 0;
    i++;
  }
  return 1;
}
