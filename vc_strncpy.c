/* ************************************ */
/*                                      */
/* vc_strncpy.c                         */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while ((i < n) && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
    dest[i++] = '\0';
  return 0;
}
