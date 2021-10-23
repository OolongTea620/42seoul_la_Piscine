#include <stdio.h>
#include <unistd.h>
void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr_ft_non_printable(str *str)
{
    int i;
    while (str[i])
}
int main(void)
{
    ft_putstr_ft_non_printable("Coucou\ntu vas bien ?");
    return (0);
}