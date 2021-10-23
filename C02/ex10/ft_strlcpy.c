#include <stdio.h>
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (dest == 0 || src == 0)
        return (0);
    if (size > 0)
    {
        while (src[i] && i < size -1)
        {
            dest[i] = src[i];
            i++;
        }
    }
    while (src[j] !='\0')
    {
        j++;
    }   
    return (j);
}
int main(void)
{
    return (0);
}