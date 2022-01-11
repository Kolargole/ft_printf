/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:41:39 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/11 18:39:52 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		write(fd, &(s[i]), 1);
		i++;
	}
	return (i);
}

size_t	ft_putadress_fd(void	*ptr)
{
	char	*ptr;
	char	c = 'u';

	ptr = &c;
	printf("%c", *ptr);
}
