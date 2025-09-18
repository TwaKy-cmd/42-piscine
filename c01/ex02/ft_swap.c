/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:40:05 by khebert           #+#    #+#             */
/*   Updated: 2025/09/18 12:04:33 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	numtest1;
	int	numtest2;

	numtest1 = 98;
	numtest2 = 9;
	ft_swap(&numtest1, &numtest2);
	printf("A devient B : %d \n", numtest1);
	printf("B devient A : %d \n", numtest2);
	return (0);
}*/
