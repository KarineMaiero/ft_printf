/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:47:12 by kmaiero           #+#    #+#             */
/*   Updated: 2022/11/04 22:05:24 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

int	ft_scan(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, unsigned int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbru(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_dex(va_arg(args, unsigned int), 0, 0));
	else if (format == 'x')
		return (ft_dexs(va_arg(args, unsigned int), 0, 0));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, unsigned long)));
	else
		return (ft_putchar(format));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			result += ft_scan(format[++i], args);
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}
