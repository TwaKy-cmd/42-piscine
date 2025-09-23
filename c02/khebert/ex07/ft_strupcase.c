/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:03:14 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 10:17:38 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}

// int main(void)
// {
//     char test[] = "abcdef";

//     printf("%s \n", ft_strupcase(test));
// }
