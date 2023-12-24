/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:22:21 by safadil           #+#    #+#             */
/*   Updated: 2023/12/20 23:22:21 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_2(t_list	**stack, int count)
{
	int	temp;

	if (!stack || (*stack)->next == NULL)
		return ;
	temp = (*stack)->number;
	(*stack)->number = ((*stack)->next)->number;
	((*stack)->next)->number = temp;
	if (count == 0)
		ft_printf("sa\n");
	if (count == 1)
		ft_printf("sb\n");
}
