/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:24:31 by safadil           #+#    #+#             */
/*   Updated: 2022/12/26 01:40:50 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr_base(long n, char *base, int *count);
void	ft_putstr(char *s, int *count);
size_t	ft_strlen(const char	*s);
void	ft_putadrs(void *b, int *count);
#endif