/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:25:21 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 09:25:50 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	test1[] = "abc";
// 	char	test2[] = "10c";
// 	char	test3[] = "";

// 	printf("%d \n", ft_str_is_alpha(test1));
// 	printf("%d \n", ft_str_is_alpha(test2));
// 	printf("%d \n", ft_str_is_alpha(test3));
// }