/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:45:38 by khebert           #+#    #+#             */
/*   Updated: 2025/09/18 13:41:20 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int	main(void)
// {
// 	int	test1;
// 	int	test2;

// 	test1 = 11;
// 	test2 = 5;
// 	ft_ultimate_div_mod(&test1, &test2);
// 	printf("Le resultat stocker est : %d \n", test1);
// 	printf("Le reste stocker est : %d \n", test2);
// 	return (0);
// }
