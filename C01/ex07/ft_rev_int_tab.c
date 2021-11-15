/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:27:52 by alfertah          #+#    #+#             */
/*   Updated: 2021/09/28 17:32:45 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size - 1)
	{
		swap = tab[size - 1];
		tab[size - 1] = tab[a];
		tab[a] = swap;
		size--;
		a++;
	}
}
