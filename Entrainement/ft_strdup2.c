/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 07:44:24 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 07:54:18 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *dup;
    int len;
    int i;
    
    i = 0;
    len = 0;
    if (src == 0)
        return (0);
    len = ft_strlen(src);
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == 0)
        return (0);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main(void)
{
    char *src = "hello";
    char *dup;
    int i;
    
    i = 0;
    dup = ft_strdup(src);
    while (src[i])
    {
        printf("%c", dup[i]);
        i++;
    }
    dup = 0;
    free(dup);
    return (0);
}