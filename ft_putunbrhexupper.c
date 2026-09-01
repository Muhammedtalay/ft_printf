/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrhexupper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:23:21 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/01 17:29:51 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbrhexupper(int *counter, unsigned int number)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (number >= 16)
	{
		ft_putunbrhexupper(counter, number / 16);
	}
	ft_putchar(counter, str[(number % 16)]);
}
