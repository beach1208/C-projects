/* ************************************ */
/*                                      */
/* tolower.c                            */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

int vc_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= 'a' && str[i] <= 'z'))
      return 0;
  return 1;
}
