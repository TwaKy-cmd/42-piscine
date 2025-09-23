/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:31:55 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 09:38:37 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char test[] = "abc";
// 	char test2[] = "WJWK";
// 	char test3[] = "";

// 	printf("%d \n", ft_str_is_lowercase(test));
// 	printf("%d \n", ft_str_is_lowercase(test2));
// 	printf("%d \n", ft_str_is_lowercase(test3));
// }