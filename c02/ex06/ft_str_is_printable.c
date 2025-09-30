/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:57:14 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 10:56:03 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char test2[] = "abs";
// 	char test3[] = "254";
// 	char test[] = " ";

// 	printf("%d \n", ft_str_is_printable(test2));
// 	printf("%d \n", ft_str_is_printable(test3));
// 	printf("%d \n", ft_str_is_printable(test));
// }