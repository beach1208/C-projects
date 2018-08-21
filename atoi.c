/* ************************************ */
/*                                      */
/* atoi.c                               */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */

int atoi(char *str)
{
  int result;
  int sign;

  result = 0;
  sign = 1;
  if (*str == '-')
  {
    sign = -1;
    str++;
  }
  for (; *str != '\0'; str++)
  {
    if (*str < '0' || *str > '9')
      return 0;
    result = result * 10 + *str - '0';
  }
  return sign * result;
}
