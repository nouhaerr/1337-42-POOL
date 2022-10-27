/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:27 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/07/31 13:42:02 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size <= dlen || !size)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	return (dlen + slen);
}
