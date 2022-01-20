/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:38:17 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/20 15:38:30 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd, len);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1, len);
		ft_putnbr_fd(-n, fd, len);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, 1, len);
	ft_putchar_fd((n % 10) + '0', 1, len);
}
