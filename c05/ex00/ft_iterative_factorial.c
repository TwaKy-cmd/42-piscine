/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoriel.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 08:46:36 by khebert           #+#    #+#             */
/*   Updated: 2025/09/29 12:28:45 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(4));
// }