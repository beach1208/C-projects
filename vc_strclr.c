/* ************************************ */
/*                                      */
/* vc_strclr.c                 */
/*                                      */
/* By:Nagisa           */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void vc_strclr(char *s)
{
    int i = 0;
    while (*s)
    {
        *s = '\0';
        printf("%s", s);
        i++;
    }
}