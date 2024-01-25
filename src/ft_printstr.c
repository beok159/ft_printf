/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uphokaew <uphokaew@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:10:25 by uphokaew          #+#    #+#             */
/*   Updated: 2024/01/25 23:25:07 by uphokaew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(const char *s)
{
	int		length;

	length = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s != '\0')
	{
		if (write(1, s, 1) == -1)
			return (-1);
		else
			length++;
		s++;
	}
	return (length);
}
