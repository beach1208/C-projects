/* ************************************ */
/*                                      */
/* strlen.c                             */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

int strlen(char *str)
{
  int i;

  i = 0;
  while (*str++ != '\0')
    i++;
  return i;
}
