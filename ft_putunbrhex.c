/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:23:21 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/01 17:28:35 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbrhex(int *counter, unsigned long number)
{
	char	*str;

	str = "0123456789abcdef";
	if (number >= 16)
	{
		ft_putunbrhex(counter, number / 16);
	}
	ft_putchar(counter, str[(number % 16)]);
}
