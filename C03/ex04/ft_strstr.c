/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:53:41 by alfertah          #+#    #+#             */
/*   Updated: 2021/10/04 10:28:05 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j + i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char baht[]= "";
	char hna[] = "slam hi chamkar";
	printf("%s", ft_strstr(hna,baht));
}*/
