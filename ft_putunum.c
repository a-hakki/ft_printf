/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:14:58 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/20 11:18:12 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int a)
{
	if (a == -1)
		return (-1);
	return (a);
}

int	ft_putunum(unsigned int u)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	else if (u <= 9)
		i = ft_putchar(u + 48);
	else
	{
		len = ft_check(ft_putnum(u / 10));
		i = ft_putchar((u % 10) + 48);
	}
	if (i != -1 && len != -1)
		return (len + i);
	return (-1);
}
