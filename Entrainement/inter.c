/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:47:17 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 14:03:16 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int already_seen(char *str, char c, int pos)
{
    int i; 

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int in_string_two(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            if (!already_seen(argv[1] ,argv[1][i], i)
                && !in_string_two(argv[1], argv[2][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}