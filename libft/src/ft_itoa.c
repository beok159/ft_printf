/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uphokaew <uphokaew@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:35:16 by uphokaew          #+#    #+#             */
/*   Updated: 2023/10/16 12:06:42 by uphokaew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		i;
	char	*str;
	long	nl;

	i = 0;
	nl = n;
	len = ft_nbrlen(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (str);
	if (nl < 0)
	{
		*(str + i) = '-';
		nl = nl * -1;
	}
	if (nl == 0)
		*(str + i) = '0';
	while (nl > 0 && len > 0)
	{
		*(str + (len - 1)) = (nl % 10) + '0';
		nl /= 10;
		len--;
	}
	return (str);
}
