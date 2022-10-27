/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:35:56 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/08 23:29:01 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;
	int	*tab;

	i = 0;
	n = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(n * sizeof(int));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < n)
	{
		tab[i] = min + i;
		i++;
	}
	return (n);
}
