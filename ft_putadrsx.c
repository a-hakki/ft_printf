/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrsx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:10:05 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/19 18:11:32 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrsx(size_t a)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	i = 0;
	s = "0123456789abcdef";
	if (a > 15)
		i = ft_putadrsx(a / 16);
	if (i == -1)
		return (-1);
	len += i;
	i = write(1, &(s[a % 16]), 1);
	if (i == -1)
		return (-1);
	return (len + i);
}