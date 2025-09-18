/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:13:13 by khebert           #+#    #+#             */
/*   Updated: 2025/09/18 17:36:04 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	debut;
	int	fin;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
}

// int	main(void)
// {
// 	int	tab[] = {6, 0, 0, 2, 8, 1};
// 	int	size;
// 	int	a;
//
// 	a = 0;
// 	size = 6;
// 	ft_rev_int_tab(tab, size);
// 	while (a < size)
// 	{
// 		printf("%d", tab[a]);
// 		a++;
// 	}
// 	return (0);
// }