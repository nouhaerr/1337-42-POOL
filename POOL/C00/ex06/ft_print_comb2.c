/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:14:46 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/07/22 11:32:26 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	z;

	x = -1;
	while (x++ < 98)
	{
		z = x;
		while (z++ < 99)
		{
			ft_putchar(48 + x / 10);
			ft_putchar(48 + x % 10);
			ft_putchar(' ');
			ft_putchar(48 + z / 10);
			ft_putchar(48 + z % 10);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
