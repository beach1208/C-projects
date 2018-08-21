#include <stdio.h>
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

int main()
{
    char str[] = "Hello";
    char *str1 = str;
    vc_strclr(str1);
    return 0;
}