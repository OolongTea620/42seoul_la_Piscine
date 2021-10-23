#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] !='\0')
    {
        if (str[i] > 96 && str[i] < 123)
            if (i == 0)
                str[i] = str[i] - 32;
            else if (str[i - 1] == 32 || str[i - 1] == 43)
                str[i] = str[i] - 32;
            else if (str[i - 1] == 45)
        else if (str[i] > 65 && str[i] < 91)
            if (i !=0)
                if (!(str[i - 1] == 32 || str[i - 1] == 43))
                    str[i] = str[i] + 32;
        
        i++;
    }
    return (str);
}
int main(void)
{
    char st[] = "salut, comment tu vas ? 42mot quarante-deux; cinquante+et+un";
    for(int i=0; i<61;i++);
    {
        printf("%c", st[i]);
    }
    ft_strcapitalize(&st);
    for(int i=0; i<61;i++);
    {
        printf("%c", st[i]);
    }
    return (0);
}