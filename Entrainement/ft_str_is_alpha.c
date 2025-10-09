/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:38:50 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 09:51:58 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (!str[i])
        return (1);
    while (str[i])
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return (0);
        else
            return (1);
    }
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("%d\n", ft_str_is_alpha(argv[1]));
    }
}