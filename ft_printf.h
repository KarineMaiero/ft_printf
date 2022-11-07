/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:33:31 by kmaiero           #+#    #+#             */
/*   Updated: 2022/11/07 17:13:53 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_hexcaps(unsigned long decimal, int i, int j);
int	ft_hexsmall(unsigned long decimal, int i, int j);
int	ft_pointer(unsigned long ptr);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbru(unsigned int n);
int	ft_putstr(char *s);
int	ft_scan(char format, va_list arg);

#endif