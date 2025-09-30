/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:50:17 by khebert           #+#    #+#             */
/*   Updated: 2025/09/30 09:14:59 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	dup = 0;
	if (src == 0)
		return (0);
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (0);
	while (src[i])
	{
		ft_strcpy(dup, src);
		i++;
	}
	return (dup);
}

/* int	main(void)
{
	int		i;
	char	*src;
	char	*dup;

	i = 0;
	src = "Hello";
	dup = ft_strdup(src);
	while (dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	dup = 0;
	return (0);
} */
