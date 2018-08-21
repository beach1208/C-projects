/* ************************************ */
/*                                      */
/* vc_putnbr.c                 */
/*                                      */
/* By:Nagisa           */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>

void vc_putnbr(int n)
{
    write(1, &n, sizeof(n));
}

int my_put_nbr(int n)
{

    if (n < 0)
    {
        vc_putnbr('-');
        n = -n;
    }
    if (n >= 10)
    {
        vc_putnbr(n / 10);
        vc_putnbr(n % 10 + '0');
    }
    if (n < 10)
    {
        vc_putnbr(n % 10 + '0');
    }
    return (n);
}