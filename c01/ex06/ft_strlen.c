/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:32:58 by khebert           #+#    #+#             */
/*   Updated: 2025/09/18 14:49:28 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	str[] = "TEST";
// 	int	len;

// 	len = ft_strlen(str);
// 	printf("str : %s\nlen : %d", str, len);
// 	return (0);
// }