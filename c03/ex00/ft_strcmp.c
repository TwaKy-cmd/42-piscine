/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:59:17 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 18:04:40 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	rep;

	i = 0;
	rep = 0;
	while (s1[i] || s2[i])
	{
		rep = s1[i] - s2[i];
		if (rep == 0)
			i++;
		else
			return (rep);
	}
	return (rep);
}

/*int	main(void)
{
	char s1[] = "Hella";
	char s2[] = "Hellu";

	printf("%d \n", ft_strcmp(s1, s2));
	return (0);
}*/