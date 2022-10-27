/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:25:50 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/01 15:51:59 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	erreur;

	erreur = ft_error(base);
	size = 0;
	while (base[size] != '\0')
		size++;
	if (erreur == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
		}
		if (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
		else
		{
			write(1, &base[nbr], 1);
		}
	}
}
