/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:42:21 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/02 01:46:47 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	i;
	long int	n;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	n = 1;
	while (n * n < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long int	i;

	i = 0;
	while (ft_is_prime(nb + i) != 1)
		i++;
	return (nb + i);
}
