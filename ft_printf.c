/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:23:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/31 17:43:04 by vimercie         ###   ########lyon.fr   */
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
	char	*hex;
	char	*hex_caps;

	hex = "0123456789abcdef";
	hex_caps = "0123456789ABCDEF";
	if (c == 'c')
		return (ft_putchar_fd((unsigned char)va_arg(ap, int), 1, len));
	if (c == 's')
		return (ft_putstr_fd((char *)va_arg(ap, void *), 1, len));
	if (c == 'p')
		return (if_p(ap, len));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1, len));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int), len));
	if (c == 'x')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), hex, len));
	if (c == 'X')
		return (ft_putnbr_hex(va_arg(ap, unsigned int), hex_caps, len));
}
