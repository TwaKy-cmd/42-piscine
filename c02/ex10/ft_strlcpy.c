/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:22:10 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 18:03:35 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(src);
	i = 0;
	if (len != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}

// int main(void)
// {
//     char dest[15];
//     char *src = "";
//     unsigned int size = 15;

//     for(unsigned int i = 0; i < size; i++)
//     {
//         dest[i] = '-';
//     }

//         printf("%d\n", ft_strlcpy(dest, src, size));

//     for(unsigned int i = 0; i < size; i++)
//     {
//         printf("%c", dest[i]);
//         if (dest[i] == '\0')
//             printf("\\0");
//     }
// }