/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaiero <kmaiero@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:45:50 by kmaiero           #+#    #+#             */
/*   Updated: 2022/11/04 21:56:13 by kmaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dexs(unsigned long decimalnum, int i, int j)
{
	unsigned long	quotient;
	unsigned long	remainder;
	char			*hexadecimalnum;

	quotient = decimalnum;
	if (decimalnum == 0)
		return (ft_iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[i] = (48 + remainder);
		else
			hexadecimalnum[i] = (87 + remainder);
		quotient = quotient / 16;
		i--;
	}
	j = ft_putstr(hexadecimalnum);
	free(hexadecimalnum);
	return (j);
}

int	ft_dex(unsigned long decimalnum, int i, int j)
{
	unsigned long	quotient;
	unsigned long	remainder;
	char			*hexadecimalnum;

	quotient = decimalnum;
	if (decimalnum == 0)
		return (ft_iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[i] = (48 + remainder);
		else
			hexadecimalnum[i] = (55 + remainder);
		quotient = quotient / 16;
		i--;
	}
	j = ft_putstr(hexadecimalnum);
	free(hexadecimalnum);
	return (j);
}

int	ft_pointer(unsigned long ptr)
{
	int	result;

	if (!ptr)
		return (ft_putstr("(nil)"));
	result = ft_putstr("0x");
	result += ft_dexs(ptr, 0, 0);
	return (result);
}
