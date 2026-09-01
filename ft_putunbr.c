/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:23:21 by mutalay           #+#    #+#             */
/*   Updated: 2026/08/30 18:41:36 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(int *counter, unsigned int number)
{
	if (number >= 10)
	{
		ft_putunbr(counter, number / 10);
	}
	ft_putchar(counter, (number % 10) + '0');
}
