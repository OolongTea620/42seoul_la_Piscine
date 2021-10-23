#include<stdio.h>
int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 1 || nb == 0);
        return (1);
    return nb * ft_iterative_factorial(nb - 1);
}

int main(void)
{
    int i;
    i = ft_iterative_factorial(5);
    printf ("test:5  %d",i);
    return (0);
}