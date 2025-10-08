/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:37:48 by khebert           #+#    #+#             */
/*   Updated: 2025/10/07 12:53:35 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
