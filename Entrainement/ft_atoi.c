/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 07:58:23 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 08:20:46 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int res;
    int sign;
    int i;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] && str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] == '-')
        sign = sign * -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * sign);
}

int  main(void)
{
    const char *test = "--42";
    printf("%d", ft_atoi(test));
    return (0);
}