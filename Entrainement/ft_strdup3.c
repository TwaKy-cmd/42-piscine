/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:53:41 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 16:05:52 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
    char *dup;
    int i;
    int len;
    
    i = 0;
    dup = 0;
    if (src == 0)
        return (0);
    len = ft_strlen(src);
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == 0)
        return (0);
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
    char *src = "Hello";
    char *dup;
    int i;

    i = 0;
    dup = ft_strdup(src);
    while (dup[i])
    {
        printf("%c", dup[i]);
        i++;
    }
    free(dup);
    dup = 0;
    return (0);
}