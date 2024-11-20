/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:16:02 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/20 14:03:18 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

#include "stdio.h"
int main()
{
	printf(" NULL %s NULL", NULL);
	//ft_printf("%X\n", -1);
	//printf("%s\n", -1);
	//printf("%X\n", -1);
}
