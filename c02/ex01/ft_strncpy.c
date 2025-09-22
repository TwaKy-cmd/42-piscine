/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 10:45:46 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 08:52:41 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[15];
	char	*src;
	unsigned int		n;

	src = "Salut tt le monde";
	n = 20;
	printf("La valeur avant est : %s \n", dest);
	ft_strncpy(dest, src, n);
	printf("La valeur apres est : %s \n", dest);
	return (0);
}
