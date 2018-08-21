#include <stdio.h>
#include <stdlib.h>

char *vc_strsub(char const *s, size_t start, size_t len)
{
    char *result = malloc(sizeof(char)*(len + 1));
    int i;
    for(i = 0; i < len; i++)
    {
        result[i] = s[start + i];
    }
    result[len] = 0;
    return result;
}

int main()
{
    int start = 6;
    int length = 3;
    char *test = "Hello World";
    printf("Original String: %s\n", test);
    vc_strsub(test, start, length);
    printf("String starting from character %d of size %d results in %s", start, length, vc_strsub(test, start, length));

    return 0;
}