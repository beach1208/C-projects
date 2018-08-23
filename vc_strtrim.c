/* ************************************ */
/*                                      */
/* vc_strtrim.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int length(char const *str)
{
  int counter;
  counter = 0;
  while (*str)
  {
    counter++;
    str++;
  }
  return counter;
}

char *vc_strtrim(char const *s)
{
  int sLen = length(s);
  char *newS = malloc(sizeof sLen);
  int i;
  int j = 0;

  for (i = 0; i < sLen; i++)
  {
    if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
    {
      newS[j] = s[i];
      j++;
    }
  }
  newS[j] = '\0';

  if (newS == NULL)
  {
    return NULL;
  }
  else
  {
    free(newS);
    return newS;
  }
}