/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:32:02 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/27 16:36:04 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_unsigned(unsigned int n, int *len)
{
    if (n > 9)
		ft_putnbr_unsigned(n / 10, len);
	ft_putchar_fd((n % 10) + '0', 1, len);
}
