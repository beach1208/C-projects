/* ************************************ */
/*                                      */
/* vc_itoa.c                            */
/*                                      */
/* By: Juan                             */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int counting(int n1)
{
    int count = 0;
    while (n1 > 0)
    {
        count++;
        n1 = n1 / 10;
    }
    return count;
}
char *vc_itoa(int n)
{
    int sign = 0;
    if(n < 0)
    {
        n = n * -1;
        sign = 1;
    }
        
    int count = counting(n);
    char *result = malloc((count + 1) * sizeof(char));

    if(sign == 1)
        result[0] = '-';
    else
        result[0] = ' ';

    int i = count;

    while(n > 0)
    {
        result[i] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    return result;
}