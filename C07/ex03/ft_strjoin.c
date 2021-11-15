/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:01:36 by alfertah          #+#    #+#             */
/*   Updated: 2021/10/14 09:35:18 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

int	ft_total_len(int size, char **tab, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (size < 1)
		return (1);
	while (i < size)
	{
		l += ft_strlen(tab[i]);
		i++;
	}
	l += (ft_strlen(sep) * (size - 1));
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*arr;

	i = 0;
	k = 0;
	arr = (char *)malloc((ft_total_len(size, strs, sep)) * sizeof(char));
	if (!arr)
		arr = NULL;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			arr[k++] = sep[j++];
		i++;
	}
	arr[k] = 0;
	return (arr);
}
/*int main(void)
{
	int i;
	char *str;
	char *s = "abc\0def\0jfdj";
	char *strs[3] = {s,s+4,s+8};
	str = ft_strjoin(3, (char **) strs, "*-_-*");
	i = -1;
	while (str[++i])
		write(1, str + i, 1);
	free(str);
}*/
