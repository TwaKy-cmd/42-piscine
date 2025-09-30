/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:53:03 by khebert           #+#    #+#             */
/*   Updated: 2025/09/30 10:24:13 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

/* int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;

	tab = 0;
	min = 14;
	max = 22;
	ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
} */