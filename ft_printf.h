/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:47:57 by ahakki            #+#    #+#             */
/*   Updated: 2024/11/20 11:22:47 by ahakki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(const char *s, ...);
int	ft_checknext(const char c, va_list arg);	
int	ft_isvalid(const char c);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putadrs(void *p);
int	ft_putadrsx(size_t a);
int	ft_putnum(int n);
int	ft_putunum(unsigned int n);

#endif
