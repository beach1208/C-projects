/* ************************************ */
/*                                      */
/* vc_strjoin.c                         */
/*                                      */
/* By: Nagisa                           */
/*                                      */
/* ************************************ */
#include "libvc.h"
char *vc_strjoin(char *s1, char *s2)
{
    int s1len = strlen(s1);
    int s2len = strlen(s2);
    int min = s1len;
    int max = s2len;
    char *fresh = (char *)malloc((max + min) * 265);

    for (int i = 0; i < s1len; i++)
    {
        for (int j = 0; j < s2len + 1; j++)
        {
            if (fresh == '\0')
            {
                return '\0';
            }
            else
            {
                *(fresh + i + j) = s1[i];
                s1[i] = s2[j];
                min++;
            }
        }
    }
    return fresh;
}

// int main()
// {
//     char str1[] = "Hello";
//     char str2[] = "WorldVancouver";
//     char *s1, *s2;
//     s1 = str1;
//     s2 = str2;

//     printf("%s", vc_strjoin(s1, s2));
// }