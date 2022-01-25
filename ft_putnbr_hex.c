/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:38:46 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/25 02:35:09 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long long int nb, char *base, int *len)
{
	unsigned int	len_base;

	len_base = ft_strlen(base);
	if (nb > len_base - 1)
		ft_putnbr_hex((nb / len_base), base, len);
	ft_putchar_fd(base[nb % len_base], 1, len);
}
