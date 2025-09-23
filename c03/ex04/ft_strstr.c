/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:29:40 by khebert           #+#    #+#             */
/*   Updated: 2025/09/23 18:01:39 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			k = 0;
			while (to_find[k] == str[i + k] || to_find[k] == 0)
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

/*int main(void)
{
	char string1[] = "kylianlegoatducode";
	char string2[] = "c";

	printf("%s", ft_strstr(string1, string2));
}*/