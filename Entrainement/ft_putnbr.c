/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:01:07 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 15:07:30 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    while (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(void)
{
    ft_putnbr(42);
}