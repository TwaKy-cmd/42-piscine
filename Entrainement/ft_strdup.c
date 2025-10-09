/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 06:51:54 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 07:08:16 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}
char *ft_strdup(char *src)
{
    int i;
    int len;
    char *dup;
    
    i = 0;
    dup = 0;
    if (src == 0)
        return (0);
    len = ft_strlen(src);
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main(void)
{
    char *src = "Hello how are you";
    char *dup;
    int i;
    
    dup = ft_strdup(src);
    i = 0;
    while (dup[i] != '\0')
    {
        printf("%c", dup[i]);
        i++;
    }
    dup = 0;
    free(dup);
    return (0);
}