/* ************************************ */
/*                                      */
/* isprint.c                            */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */

int isprint(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= ' ' && str[i] <= '~'))
      return 0;
  return 1;
}