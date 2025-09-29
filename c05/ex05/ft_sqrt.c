/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:33:51 by khebert           #+#    #+#             */
/*   Updated: 2025/09/29 10:47:25 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	if (nb < 0)
		return (0);
	while (res < nb)
	{
		res = i * i;
		i++;
	}
	if (res == nb)
	{
		return (i - 1);
	}
	if (nb > res)
		return (0);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(9));
// }
