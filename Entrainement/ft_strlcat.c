/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:55:48 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 11:18:39 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int k;
    unsigned int source_len;
    unsigned int dest_len;

    source_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if (size <= dest_len)
        return (size + source_len);
    i = 0;
    while (dest[i] != '\0')
        i++;
    k = 0;
    while (src[k] && i < size - dest_len - 1)
    {
        dest[i + k] = src[k];
        k++;
    }
    dest[i + k] = '\0';
    return (dest_len + source_len);
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = "HowAreYouhhhhhhhhhhhhlllllllllllllllllll";
    unsigned int size = 20;

    printf("%u\n", ft_strlcat(dest, src, size));
    printf("%s\n", dest);
    return (0);
}