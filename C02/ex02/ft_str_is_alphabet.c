#include <unistd.h>
int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    //주어진 문자열에 알파벳이 포함되어 있으면 1 다른 문자가 있으면 0 반환
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return (1);
        else if (str[i] >= 'a' && str[i] <= 'z')
            return (1);
        i++;
    }
    return (0);
}
int main(void)
{
    return (0); 
}