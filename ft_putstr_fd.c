/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:39:12 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/25 02:11:09 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", fd, len));
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, len);
		i++;
	}
}
