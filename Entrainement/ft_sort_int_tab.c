/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 07:48:59 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 10:20:47 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_strcmp(char s1, char s2)
{
    int rep;
    int i;
    
    rep = 0;
    i = 0;
    while (s1 || s2)
    {
        rep = s1 - s2;
        if (rep == 0)
            i++;
        else
            return (rep);    
    }
    return (rep);
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        if (ft_strcmp(tab[i], tab[i + 1]) > 0)
        {
            ft_swap(&tab[i], &tab[i + 1]);
            i = 0;
        }
        else
            i++;
    }
}

int main(void)
{
    int tab[] = {5, 4, 3, 2, 1};
    int size = 5;
    int i;
    
    i = 0;
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}