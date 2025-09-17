/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twaky <twaky@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:56:58 by twaky             #+#    #+#             */
/*   Updated: 2025/09/17 21:52:58 by twaky            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// int    main(void)
// {
//     ft_is_negative(0);
//     ft_is_negative(-21);
//     ft_is_negative(-23);
//     return 0;
// }