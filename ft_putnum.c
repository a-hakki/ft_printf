/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:46:31 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/20 12:09:06 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(int a)
{
	if (a == -1)
		return (-1);
	return (a);
}

int	ft_putnum(int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (n == -2147483648)
	{
		len = ft_check(ft_putnum(n / 10));
		i = ft_putchar('8');
	}
	else if (n < 0)
	{
		i = ft_putchar('-');
		len = ft_check(ft_putnum(-n));
	}
	else if (n <= 9)
		i = ft_putchar(n + 48);
	else
	{
		len = ft_check(ft_putnum(n / 10));
		i = ft_putchar((n % 10) + 48);
	}
	if (i != -1 && len != -1)
		return (len + i);
	return (-1);
}
