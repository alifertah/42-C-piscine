/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:46:21 by alfertah          #+#    #+#             */
/*   Updated: 2021/10/14 14:37:13 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	max -= min;
	tab = malloc(sizeof(int) * max);
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (++i < max)
		tab[i] = min + i;
	return (tab);
}

/*int main(void)
{
    int *str;
    int i;

    i = 0;
    str = ft_range(1, 120);
    while(i < 120 - 1)
    {
        printf("%d, ",str[i]);
        i++;
    }
    return (0);
}*/
