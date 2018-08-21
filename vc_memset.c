#include <string.h>

void *vc_memset(void *b, int c, size_t len)
{

    for (int i = 0; i < len; i++)
    {
        ((unsigned char *)b)[i] = c;
    }
    return b;
}

// int main()
// {
//     char str[30] = "what the hell";

//     printf("%s", vc_memset(str, '*', 4));
//     return 0;
// }