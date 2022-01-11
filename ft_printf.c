/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:23:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/11 18:16:03 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	counter;
	va_list	ap;

	i = 0;
	counter = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				write(1, "%", 1);
			else
				counter += if_forest(format[i + 1], ap);
			i + 2;
		}
		else
		{
			write(1, format[i], 1);
			i++;
			counter++;
		}
	}
}

size_t	if_forest(char	c, va_list ap)
{
	if (c == 'c')
		return (write(1, (unsigned char)va_arg(ap, unsigned char), 1));
	if (c == 's')
		return (ft_putstr_fd((char *)va_arg(ap, char *), 1));
	if (c == 'p')
		return (ft_putstr_fd((void	*)va_arg(ap, void *), 1))
	if (c == 'd')
		
	if (c == 'i')

	if (c == 'u')

	if (c == 'x')
	
	if (c == 'X')
	
}