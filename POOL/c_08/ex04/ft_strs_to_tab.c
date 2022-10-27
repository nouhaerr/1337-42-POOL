/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:03:32 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/11 00:59:57 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t;

	t = malloc(sizeof(t_stock_str) * (ac +1));
	if (!t)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(t[i].str);
		i++;
	}
	t[i].str = 0;
	return (t);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	t_stock_str *arr;
	arr = ft_strs_to_tab(ac, av);
	int i = 0;
	while (i < ac)
	{
		printf("%d\n", arr[i].size);
		printf("%s\n%s\n", arr[i].str, arr[i].copy);
		i++;
	}
	return (0);
}*/
