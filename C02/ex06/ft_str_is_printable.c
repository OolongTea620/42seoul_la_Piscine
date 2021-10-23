#include <stdio.h>
int ft_str_is_printable(char *str)
{
    while(str[i] != '\0')
    {
        if (str[i] >= 0 && str[i] <= 31)
            return (0);
        else if (str[i] == 127)
            return (0)
        i++;
    }
    return (1);
}
int main(void)
{
    return (0);
}