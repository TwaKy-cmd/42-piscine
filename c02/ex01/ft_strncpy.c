/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:45:46 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 11:18:57 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[100];
// 	char	*src = "Hello";
// 	unsigned int		n = 15;

// 	printf("Avant : %s \n", dest);
// 	ft_strncpy(dest, src, n);
// 	printf("Apres : %s \n", dest);

// 	for(unsigned int i = 0; i < n; i++)
//     {
//         printf("%c", dest[i]);
//         if (dest[i] == '\0')
//             printf("\\0");
//     }
// 	return (0);
// }
