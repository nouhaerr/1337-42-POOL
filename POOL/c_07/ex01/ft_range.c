/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:06:17 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/07 20:09:40 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*tab;

	i = 0;
	n = max - min;
	tab = (int *)malloc(n * sizeof(int));
	if (min >= max)
		return (0);
	if (!tab)
		return (0);
	while (i < n)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
