/* ************************************ */
/*                                      */
/* vc_strmap.c                          */
/*                                      */
/* By: Kenta, Marla                     */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int vc_strlen(char *str)
{
  int counter = 0;
  while (*str)
  {
    counter++;
    str++;
  }
  return counter;
}

char *vc_strmap(char const *s, char (*f)(char))
{
  int i;
  int len = vc_strlen((char *)s);
  char *str = ((char *)malloc((len + 1) * sizeof(char)));
  *str = *s;

  for (i = 0; i < len; i++)
  {
    str[i] = (*f)(s[i]);
  }
  str[i] = '\0';
  return str;
}