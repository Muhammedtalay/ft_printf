/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 14:38:11 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/01 17:41:49 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	sorting(int *counter, va_list lst, const char *fmt)
{
	if (*fmt == '%')
		ft_putchar(counter, '%');
	else if (*fmt == 'c')
		ft_putchar(counter, (char)va_arg(lst, int));
	else if (*fmt == 's')
		ft_putstr(counter, va_arg(lst, char *));
	else if (*fmt == 'd' || *fmt == 'i')
		ft_putnbr(counter, va_arg(lst, int));
	else if (*fmt == 'u')
		ft_putunbr(counter, va_arg(lst, unsigned int));
	else if (*fmt == 'x')
		ft_putunbrhex(counter, va_arg(lst, unsigned int));
	else if (*fmt == 'X')
		ft_putunbrhexupper(counter, va_arg(lst, unsigned int));
	else if (*fmt == 'p')
		ft_putptr(counter, va_arg(lst, unsigned long));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	lst;
	int		counter;

	if (!fmt)
		return (-1);
	counter = 0;
	va_start(lst, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '\0')
				return (-1);
			sorting(&counter, lst, fmt);
			fmt++;
		}
		else
		{
			ft_putchar(&counter, *fmt);
			fmt++;
		}
	}
	va_end(lst);
	return (counter);
}
