/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:47:47 by khebert           #+#    #+#             */
/*   Updated: 2025/10/08 06:45:55 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i] != '\0' && charset[i] != c)
		i++;
	if (charset[i] == '\0')
		return (0);
	else
		return (1);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			count++;
		i++;
	}
	return (count);
}

void	ft_write_the_word(char *dest, char *str, int len, int start)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		w;

	i = 0;
	w = 0;
	strs = malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
	while (str[i])
	{
		j = 0;
		if (is_sep(str[i], charset))
			i++;
		else
		{
			while (!is_sep(str[i + j], charset))
				j++;
			strs[w] = malloc(sizeof(char) * j + 1);
			ft_write_the_word(strs[w++], str, j, i);
			i = i + j;
		}
	}
	strs[w] = NULL;
	return (strs);
}

// int main(void)
// {
//     char str[] = ";salut la;moulinette;";
//     char charset[] = " ;";
//     char **strs;
//     int i;

//     i = 0;
//     strs = ft_split(str, charset);
//     while (strs[i])
//     {
//         printf("%s\n", strs[i]);
//         i++;
//     } 
//     free(strs);
//     return (0);

// }