/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:48:17 by khebert           #+#    #+#             */
/*   Updated: 2025/09/29 15:15:47 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
		return (1);
	count = 0;
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(7));
// }
