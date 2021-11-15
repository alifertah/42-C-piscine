/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:33:37 by alfertah          #+#    #+#             */
/*   Updated: 2021/09/28 17:43:32 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	temp;

	temp = 0;
	while (temp < (size - 1))
	{
		if (tab[temp] > tab[temp + 1])
		{
			swap = tab[temp];
			tab[temp] = tab[temp + 1];
			tab[temp + 1] = swap;
			temp = 0;
		}
		else
		{
			temp++;
		}
	}
}
