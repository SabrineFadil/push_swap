/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:13:04 by safadil           #+#    #+#             */
/*   Updated: 2023/12/22 21:13:04 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_5(t_list **stack_a, t_list	**stack_b)
{
	int	position;

	while (size_stack(*stack_a) > 3)
	{
		position = get_position(*stack_a, min_value(*stack_a));
		while ((*stack_a)->number != min_value(*stack_a))
		{
			if (position > size_stack(*stack_a) / 2)
				rrotate_stack(stack_a, 0);
			else
				rotate_stack(stack_a, 0);
		}
		push_b(stack_a, stack_b);
	}
	sort_3(stack_a);
	while (size_stack(*stack_b) > 0)
	{
		push_a(stack_a, stack_b);
	}
}
