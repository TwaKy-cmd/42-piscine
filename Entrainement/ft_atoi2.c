/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:51:09 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 10:18:08 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] && (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
        sign = sign * -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(void)
{
    const char *str = "-42tyjdghdf95";

    printf("%d", ft_atoi(str));
    return (0);
}