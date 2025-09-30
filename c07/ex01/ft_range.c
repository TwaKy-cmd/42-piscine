/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:16:17 by khebert           #+#    #+#             */
/*   Updated: 2025/09/30 10:03:27 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;

	tab = 0;
	min = 2;
	max = 12;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}
