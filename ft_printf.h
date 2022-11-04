/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:33:31 by kmaiero           #+#    #+#             */
/*   Updated: 2022/11/04 21:58:29 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putnbru(unsigned int n);
int	ft_printf(const char *format, ...);
int	ft_scan(char format, va_list arg);
int	ft_toupper(int ch);
int	ft_pointer(unsigned long ptr);
int	ft_dex(unsigned long decimal, int i, int j);
int	ft_dexs(unsigned long decimal, int i, int j);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);

#endif