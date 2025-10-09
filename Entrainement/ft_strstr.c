/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:32:12 by khebert           #+#    #+#             */
/*   Updated: 2025/10/09 10:41:10 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int k;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0' && to_find[0] != '\0')
    {
        if (str[i] == to_find[0])
        {
            k = 0;
            while ((str[i + k] == to_find[k]) || to_find[k] == 0)
            {
                if (to_find[k] == 0)
                    return (&str[i]);
                k++;
            }
        }
        i++;
    }
    return (0);
}
int main(void)
{
	char string1[] = "ILoveTheCode";
	char string2[] = "C";

	printf("%s\n", ft_strstr(string1, string2));
}