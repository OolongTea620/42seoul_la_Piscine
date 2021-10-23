/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelkim <hyelkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 08:59:41 by hyelkim           #+#    #+#             */
/*   Updated: 2021/10/23 09:56:41 by hyelkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char     *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
