/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:52:19 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/19 18:11:30 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrs(void *p)
{
	int		i;
	int		len;*
	size_t	a;

	a = (size_t)p;
	i = ft_putstr("0x");
	if (i == -1)
		return (-1);
	len = i;
	if (a == 0)
		return (write(1, "0", 1) + len);
	i = ft_putadrsx(a);
	if (i == -1)
		return (-1);
	len += i;
	return (len);
}
