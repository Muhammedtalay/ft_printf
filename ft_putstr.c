/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:14:32 by mutalay           #+#    #+#             */
/*   Updated: 2026/08/29 20:26:47 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(int *counter,char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(counter, s[i]);
		i++;
	}
}
