/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:48:17 by khebert           #+#    #+#             */
/*   Updated: 2025/09/29 15:16:31 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb <= 2147483647)
	{
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				count++;
			}
			i++;
		}
		i = 1;
		if (count == 2)
			return (nb);
		count = 0;
		nb++;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_find_next_prime(14));
// }