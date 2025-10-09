/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:36:03 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 14:02:46 by khebert          ###   ########.fr       */
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

int in_string(char *str, char c)
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
    int k;

    i = 0;
    k = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!already_seen(argv[1], argv[1][i], i))
                write(1, &argv[1][i], 1);
            i++;
        }
        while (argv[2][k])
        {
            if (!already_seen(argv[2], argv[2][k], k)
                && !in_string(argv[1], argv[2][k]))
                write(1, &argv[2][k], 1);
            k++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}
