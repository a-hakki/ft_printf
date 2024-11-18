/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:06:12 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/18 14:24:26 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putstr(const char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[len])
	{
		i = write(1, &s[len], 1);
		if (i == -1)
			return (i);
		len++;
	}
	return (len);
}
