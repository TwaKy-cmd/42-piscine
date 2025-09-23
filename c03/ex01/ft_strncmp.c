/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:56:58 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 18:04:12 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				rep;

	i = 0;
	rep = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		rep = s1[i] - s2[i];
	return (rep);
	return (0);
}

/*int	main(void)
{
	char s1[] = "helln";
	char s2[] = "hellb";
	unsigned int n = 5;

	printf("%d", ft_strncmp(s1, s2,n));
	return (0);
}*/