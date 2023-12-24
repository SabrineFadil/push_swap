/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 02:11:09 by safadil           #+#    #+#             */
/*   Updated: 2022/12/12 02:45:01 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	i = 0;
	while (*s)
	{
		ft_putchar(*s, count);
		s++;
	}
}
