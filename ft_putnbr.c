/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:23:21 by mutalay           #+#    #+#             */
/*   Updated: 2026/08/29 20:38:02 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int *counter, int n)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		number = number * -1;
		ft_putchar(counter, '-');
	}
	if (number >= 10)
	{
		ft_putnbr(counter, number / 10);
	}
	ft_putchar(counter, (number % 10) + '0');
}
