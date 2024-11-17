/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:27:27 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/17 13:41:56 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_checknext(const char c, va_list arg)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(arg, int));
	if (c == 's')
		i = ft_putstr(va_arg(arg, char*));
	if (c == 'p')
		i = ft_putadrs(va_arg(arg, void*));
	if (c == 'i' || c = 'd')
		i = ft_putnum(va_arg(arg, int));
}
