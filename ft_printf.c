/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 14:38:11 by mutalay           #+#    #+#             */
/*   Updated: 2026/08/29 20:43:14 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *array, ...)
{
	va_list lst;
	int		counter;

	counter = 0;
	va_start(lst, array);
	while (*array)
	{
		if (*array == '%')
		{
			array++;
			if (*array == 'c')
			{
				array++;
				ft_putchar(&counter, va_arg(lst, char));
			}
			else if(*array == 's')
			{
				array++;
				ft_putstr(&counter, va_arg(lst, char *));
			}
			else if(*array == 'd')
			{
				array++;
				ft_putnbr(&counter, va_arg(lst, int));
			}
		}
		else
		{
			ft_putchar(&counter, *array);
			array++;
		}
		va_end(lst);
	}
	return (0);
}
