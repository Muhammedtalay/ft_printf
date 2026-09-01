/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:23:21 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/01 17:49:49 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbrhexp(int *counter, unsigned long number)
{
	char	*str;

	str = "0123456789abcdef";
	if (number >= 16)
	{
		ft_putunbrhexp(counter, number / 16);
	}
	ft_putchar(counter, str[(number % 16)]);
}

void	ft_putptr(int *counter, unsigned long number)
{
	if (!number)
	{
		ft_putstr(counter, "(nil)");
		return ;
	}
	else
	{
		ft_putstr(counter, "0x");
		ft_putunbrhexp(counter, number);
	}
}
