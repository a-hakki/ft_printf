/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:06:12 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/19 18:16:42 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		ft_putstr("(null)");
	while (s[len])
	{
		i = write(1, &s[len], 1);
		if (i == -1)
			return (-1);
		len++;
	}
	return (len);
}
