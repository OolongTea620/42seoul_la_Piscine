/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelkim <hyelkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:06:07 by hyelkim           #+#    #+#             */
/*   Updated: 2021/10/22 17:06:13 by hyelkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9)
    {
        ft_putchar('0' + nb);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}
