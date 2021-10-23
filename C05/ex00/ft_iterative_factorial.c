#include<stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    while (nb > 0)
    {
        i = i * nb;
        nb--;
    }
    if (nb < 0)
        return (1);
    else if (nb == 0)
        return (1);
    return (i);
}

int main(void)
{
    int i;
    i = ft_iterative_factorial(5);
    printf ("test:5  %d",i);
    return (0);
}