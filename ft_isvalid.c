/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:12:35 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/17 13:47:47 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpritf.h"

int	ft_isvalid(const char c)
{
	int		i;
	char	ch;
	char	s[] = "cspiduxX%"

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
