#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
            if (fresh == NULL)
            {
                return NULL;
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

int main()
{
    /* code */
    char str1[] = "HelloVancouver";
    char str2[] = "WorldTomorrow";
    char *s1 = str1;
    char *s2 = str2;
    printf("%s", vc_strjoin(s1, s2));
    return 0;
}
