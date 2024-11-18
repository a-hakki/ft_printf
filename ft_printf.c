/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:16:02 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/17 21:52:07 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		check;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			write(1, s + i, 1);
			len++;
		}
		else 
		{
			i++;
			if (ft_isvalid(s[i]))
				check = ft_checknext(s[i], args);
			if(check < 0)
				return (-1);
			len += check;
		}
		i++;
	}
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int	i = ft_printf("github: %c%c%c%c%c%c%c\n", 97, '-', 'h','a', 'k', 'k', 'i');
	printf("%i", i);
	return (0);
}
