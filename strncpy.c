/* ************************************ */
/*                                      */
/* strncpy.c                            */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

char *strncpy(char *dest, char *src, unsigned int n)
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
