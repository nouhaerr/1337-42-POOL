/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:46:50 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/07/23 21:12:06 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_body(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		j = 0;
		if (x > 1)
		{
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			ft_putchar('|');
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_first_line(x);
	if (y > 1)
	{
		print_body(x, y);
		print_last_line(x);
	}
}
