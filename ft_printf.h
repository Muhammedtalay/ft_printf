/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalay <mutalay@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 19:33:12 by mutalay           #+#    #+#             */
/*   Updated: 2026/09/01 17:32:28 by mutalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *array, ...);
void	ft_putchar(int *counter, char c);
void	ft_putnbr(int *counter, int n);
void	ft_putstr(int *counter, char *s);
void	ft_putunbr(int *counter, unsigned int number);
void	ft_putunbrhex(int *counter, unsigned long number);
void	ft_putunbrhexupper(int *counter, unsigned int number);
void	ft_putptr(int *counter, unsigned long number);

#endif