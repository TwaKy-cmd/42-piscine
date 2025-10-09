/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 07:37:05 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 07:42:36 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    int rep;
    
    i = 0;
    rep = 0;
    while (s1[i] || s2[i])
    {
        rep = s1[i] - s2[i];
        if (rep == 0)
            i++;
        else
            return (rep);    
    }
    return (rep);
}

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hella";

    printf("%d", ft_strcmp(s1, s2));
    return (0);
}