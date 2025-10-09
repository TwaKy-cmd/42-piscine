/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:26:57 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 10:31:44 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main(void)
{
    char dest[] = "Hello";
    char src[] = "HowAreYou";
    unsigned int nb = 9;

    ft_strncat(dest, src, nb);
    printf("%s\n", dest);
    return (0);
}