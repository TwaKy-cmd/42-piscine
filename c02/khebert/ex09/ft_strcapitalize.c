/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:25:18 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 12:20:46 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] > '0' && str[i - 1] < '9'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "sAlUt, bonsoiR? 818;mots forty-twO;AB fifty+aNd+one";
// 	ft_strcapitalize(str);
// 	printf("%s",str);
// 	return (0);
// }
