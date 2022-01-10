/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:23:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/10 12:00:04 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	len;
	size_t	i;
	va_list	ap;

	len = ft_strlen(format);
	i = 0;
	va_start(ap, format);
	while (format[i] != '%' && i != len)
	{
		write(1, format[i], 1);
		i++;
	}
	if (i != len)
		if_forest(format[i + 1], va_arg());
}

char	*if_forest(char type)
{
	if (type == c)
	if (type == s)
	if (type == p)
	if (type == d)
	if (type == i)
	if (type == u)
	if (type == x)
	if (type == X)
	if (type == %)
}
