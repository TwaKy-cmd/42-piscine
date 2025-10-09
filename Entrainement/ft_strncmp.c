/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:56:43 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 10:12:34 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    int rep;
    
    i = 0;
    rep = 0;
    while (i < n && (s1[i] || s2[i]))
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
    char *s2 = "Helli";
    unsigned int n = 4;
    
    printf("%d\n", ft_strncmp(s1, s2, n));
    return (0);    
}