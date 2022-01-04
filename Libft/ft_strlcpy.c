/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:53:04 by vimercie          #+#    #+#             */
/*   Updated: 2021/11/07 13:25:05 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	lenmax;
	size_t	dstsize;
	int		i;

	lenmax = 0;
	dstsize = size;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[lenmax])
		lenmax++;
	while (src[i] && ((dstsize - 1) > 0))
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (lenmax);
}
