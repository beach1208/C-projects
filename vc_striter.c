/* ************************************ */
/*                                      */
/* vc_striter.c                         */
/*                                      */
/* By: Kenta                            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// Not sure why second argument has to take a char pointer as an argument
void vc_striter(char *s, void (*f)(char *))
{
  while (*s)
  {
    (*f)(s++);
  }
}
