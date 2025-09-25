/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:47:16 by khebert           #+#    #+#             */
/*   Updated: 2025/09/25 15:53:36 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	k;

	i = argc - 1;
	while (i > 0)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
