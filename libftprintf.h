/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:47:57 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/18 15:23:49 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_checknext(const char c, va_list arg);	
int	ft_isvalid(const char c);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putadrs(void *p);

#endif
