/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:25:20 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 01:33:22 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long nb, char *base, int *count)
{
	int			result;
	long long	diviseur;
	int			size_base;

	size_base = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
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
