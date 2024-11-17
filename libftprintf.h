/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:47:57 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/17 15:54:24 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_checknext(const char c, va_list arg);	
int	ft_isvalid(const char c);
int	ft_putchar(char c);

#endif
