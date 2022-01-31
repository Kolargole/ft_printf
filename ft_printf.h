/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:56:25 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/31 17:33:55 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	if_forest(char c, va_list ap, int *len);
void	if_p(va_list ap, int *len);
size_t	ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(int n, int fd, int *len);
void	ft_putnbr_hex(unsigned long long int nb, char *base, int *len);
void	ft_putnbr_unsigned(unsigned int nb, int *len);

#endif