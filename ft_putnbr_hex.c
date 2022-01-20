/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:38:46 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/20 15:38:56 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long long int nb, char xX, int *len)
{
	char			*base;
	unsigned int	len_base;

	if (xX == 'x')
		base = "0123456789abcdef";
	if (xX == 'X')
		base = "0123456789ABCDEF";
	len_base = 16;
	if (nb > len_base - 1)
		ft_putnbr_hex((nb / len_base), xX, len);
	ft_putchar_fd(base[nb % len_base], 1, len);
}
