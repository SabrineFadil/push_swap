/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:17:44 by safadil           #+#    #+#             */
/*   Updated: 2022/12/12 03:10:45 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	arg_definer(const char	*str, va_list	varg, int *count)
{
	if (*str == '%')
		ft_putchar('%', count);
	else if (*str == 'c')
		ft_putchar(va_arg(varg, int), count);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_base(va_arg(varg, int), "0123456789", count);
	else if (*str == 's')
		ft_putstr(va_arg(varg, char *), count);
	else if (*str == 'u')
		ft_putnbr_base(va_arg(varg, unsigned int), "0123456789", count);
	else if (*str == 'x')
		ft_putnbr_base(va_arg(varg, unsigned int), "0123456789abcdef", count);
	else if (*str == 'X')
		ft_putnbr_base(va_arg(varg, unsigned int), "0123456789ABCDEF", count);
	else if (*str == 'p')
		ft_putadrs(va_arg(varg, void *), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	varg;
	int		count;

	count = 0;
	va_start(varg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			arg_definer(str, varg, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(varg);
	return (count);
}
