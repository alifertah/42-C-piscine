/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:46:52 by alfertah          #+#    #+#             */
/*   Updated: 2021/10/14 09:34:41 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	*range = tab;
	return (i);
}

/*int main()
{
	int *arr;
	int max = 800;
	int min = 100;
	printf("%d", ft_ultimate_range(&arr, min, max));
	return 0;
}*/
