/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:23:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/20 18:48:09 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				ft_putchar_fd('%', 1, &len);
			else
				if_forest(format[i + 1], ap, &len);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1, &len);
		i++;
	}
	va_end(ap);
	return (len);
}

void	if_forest(char c, va_list ap, int *len)
{
	if (c == 'c')
		return (ft_putchar_fd((unsigned char)va_arg(ap, int), 1, len));
	if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1, len));
	if (c == 'p')
	{
		ft_putstr_fd("0x", 1, len);
		return (ft_putnbr_hex(va_arg(ap, unsigned long long int), 'x', len));
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1, len));
	if (c == 'u')
		return (ft_putnbr_fd(va_arg(ap, unsigned int), 1, len));
	if (c == 'x')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), 'x', len));
	if (c == 'X')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), 'X', len));
}
