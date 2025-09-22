/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:25:18 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 11:20:45 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		if (str[index] >= 'a' && str[index] <= 'z' && str[index - 1] <= 47)
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}

// int main(void)
// {
//     char test[] = "abc def";
//     printf("%s \n", ft_strcapitalize(test));
// 	return 0;
// }
