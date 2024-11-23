/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:16:02 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/23 12:02:43 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		check;
	int		len;
	va_list	args;

	if (!s)
		return (0);
	if (write(1, 0, 0) == -1)
		return (-1);
	len = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s != '%')
			len += write(1, &(*s), 1);
		else
		{
			if (ft_isvalid(*(s + 1)))
				check = ft_checknext(*(++s), args);
			if (check == -1)
				return (-1);
			len += check;
		}
		s++;
	}
	return (va_end(args), len);
}
