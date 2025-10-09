/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:39:59 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 09:49:15 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}

int main(int argc, char *argv[])
{
    int len;

    len = ft_strlen(argv[1]);
    if (argc == 2)
    {
        while (len > 0)
        {
            write(1, &argv[1][len], 1);
            len--;
        }   
    }
    else
        write(1, "\n", 1);
    return (0);
}