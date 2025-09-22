/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:08:25 by khebert           #+#    #+#             */
/*   Updated: 2025/09/22 14:47:24 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while(*str)
	{
		if(*str >= 32 && *str <= 126)
		{
			write(1, &str, 1);
		 	str++;
		}
	}
}

int	main(void)
{
	int i = 48;

	printf("La valeur en hexa correspond a %x", i);
}
