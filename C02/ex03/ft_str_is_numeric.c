#include <unistd.h>
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
            return (1);
        else 
            return (0);
        i++;
    }
    return (0);
}
int main(void)
{
    return (0); 
}