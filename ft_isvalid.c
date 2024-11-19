/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:12:35 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/19 18:15:15 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isvalid(const char c)
{
	int		i;
	char	ch;
	char	*s;

	s = "cspiduxX%";
	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
