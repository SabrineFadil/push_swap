/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 04:31:00 by safadil           #+#    #+#             */
/*   Updated: 2022/12/26 01:41:12 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadr(unsigned long nb, char *base, int *count)
{
	int				result;
	unsigned long	diviseur;
	unsigned long	size_base;

	size_base = ft_strlen(base);
	diviseur = 1;
	while ((nb / diviseur) >= size_base)
		diviseur = diviseur * size_base;
	while (diviseur > 0)
	{
		result = (nb / diviseur) % size_base;
		ft_putchar(base[result], count);
		diviseur = diviseur / size_base;
	}
}

void	ft_putadrs(void *b, int *count)
{
	ft_putstr("0x", count);
	ft_putadr((unsigned long)b, "0123456789abcdef", count);
}
