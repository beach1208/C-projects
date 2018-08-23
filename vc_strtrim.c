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

static int beginingSpaceCount(char const *s)
{
  int counter = 0;
  int i = 0;
  while (*s)
  {
    if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
    {
      break;
    }
    counter++;
    i++;
  }
  return counter;
}

static int endSpaceCount(char const *s)
{
  int counter = 0;
  int i = length(s);
  while (*s)
  {
    if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
    {
      break;
    }
    counter++;
    i--;
  }
  return counter;
}

char *vc_strtrim(char const *s)
{
  int sLen = length(s);
  char *newS = malloc(sizeof sLen);
  int beginingSpaceNum = beginingSpaceCount(s);
  int endSpaceNum = endSpaceCount(s);
  int i;
  int j = 0;

  for (i = beginingSpaceNum; i < sLen - endSpaceNum; i++)
  {
    newS[j] = s[i];
    j++;
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
