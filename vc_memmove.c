#include <string.h>
void *vc_memmove(void *dst, const void *src, size_t len)
{
    for (int i = 0; i < len; i++)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    }
    return dst;
}

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz";  // Array of size 5

    puts("str1 before memmove ");
    puts(str1);

    /* Copies contents of str2 to sr1 */
    vc_memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);

    return 0;
}