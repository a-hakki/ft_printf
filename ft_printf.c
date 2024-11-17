/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:16:02 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/16 13:05:32 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int	i = 0;
	va_list	args;

	va_start(args, s);
	while(s[i])
	{
		if (s[i] != '%')
			write(1, s + i, 1);
		else if	(ft_isvalid(s[i + 1]))
		{
			ft_checknext(s[i + 1], args);
			i++;
			va_arg
		}
		i++;
	}
}
int main()
{
	ft_printf("hakki %H%A%K%K%I");
}
