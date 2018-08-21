/* ************************************ */
/*                                      */
/* toupper.c                            */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

int toupper(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
      return 0;
  return 1;
}
