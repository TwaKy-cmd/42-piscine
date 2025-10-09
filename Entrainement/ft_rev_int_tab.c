/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 07:48:59 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 10:20:59 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;
    while (i < size)
    {
        temp = tab[i];
        tab[i] = tab[size - 1];
        tab[size - 1] = temp;
        i++;
        size--;
    }
}

// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int i;
    
//     i = 0;
//     ft_rev_int_tab(tab, size);
//     while (i < size)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }