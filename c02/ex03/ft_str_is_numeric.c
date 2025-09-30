/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:25:21 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 09:30:50 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	test1[] = "01o";
// 	char	test2[] = "101";
// 	char	test3[] = "";

// 	printf("%d \n", ft_str_is_numeric(test1));
// 	printf("%d \n", ft_str_is_numeric(test2));
// 	printf("%d \n", ft_str_is_numeric(test3));
// }