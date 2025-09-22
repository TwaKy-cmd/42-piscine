/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:50:01 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 09:54:41 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char test1[] = "SAFA";
// 	char test2[] = "jfls";
// 	char test3[] = "";

// 	printf("%d \n", ft_str_is_uppercase(test1));
// 	printf("%d \n", ft_str_is_uppercase(test2));
// 	printf("%d \n", ft_str_is_uppercase(test3));
// }