/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:35:38 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/08/06 17:21:51 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		b = 0;
		while (str[i + b] == to_find[b] && str[i + b] != '\0')
		{
			if (to_find[b + 1] == '\0')
				return (&str[i]);
			b++;
		}
		i++;
	}
	return (0);
}
