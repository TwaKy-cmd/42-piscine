/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:41:33 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 10:41:09 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char depart;
// 	char arriver;
// 	depart = 15;
// 	arriver = 25;
// 	printf("La valeur de depart est : %d \n", arriver);
// 	ft_strcpy(&arriver, &depart);
// 	printf("La valeur darriver est : %d \n", arriver);
// 	return (0);
// }
