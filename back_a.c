/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:56:14 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 06:02:37 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_max(t_list	**stack_a, t_list **stack_b, int p, int pos)
{
	if (p > pos)
		push_a(stack_a, stack_b);
	else
	{
		push_a(stack_a, stack_b);
		swap_2(stack_a, 0);
	}
}

void	back_a(t_list	**stack_a, t_list	**stack_b)
{
	int		max;
	int		pos;
	int		p;
	int		next_max;

	while (*stack_b != NULL && size_stack(*stack_b))
	{
		max = max_value(*stack_b);
		p = get_position(*stack_b, max);
		next_max = size_stack(*stack_b) - 1;
		pos = get_position(*stack_b, next_max);
		while ((*stack_b)->number != max)
		{
			if (p > (size_stack(*stack_b) / 2))
				rrotate_stack(stack_b, 1);
			else
				rotate_stack(stack_b, 1);
		}
		if ((*stack_b)->number == max)
			process_max(stack_a, stack_b, p, pos);
	}
}
