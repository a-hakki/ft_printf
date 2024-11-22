/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:16:02 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/22 15:48:58 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		check;
	int		len;
	va_list	args;

	if (!s)
		return (0);
	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
			len += write(1, s + i, 1);
		else
		{
			if (ft_isvalid(s[i + 1]))
				check = ft_checknext(s[++i], args);
			if (check < 0)
				return (-1);
			len += check;
		}
		i++;
	}
	return (va_end(args), len);
}
