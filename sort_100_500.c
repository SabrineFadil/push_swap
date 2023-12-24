/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:20:59 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 05:20:59 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_min(t_list **stack_a, t_list **stack_b, int n)
{
	push_b(stack_a, stack_b);
	if ((*stack_a) != NULL && (*stack_a)->index > n)
		rr(stack_a, stack_b);
	else
		rotate_stack(stack_b, 1);
}

void	sort_in_a(t_list	**stack_a, t_list	**stack_b, int chunk)
{
	int		next_c;
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_a;
	next_c = chunk;
	while (*stack_a)
	{
		while ((*stack_a) && (*stack_a)->index > chunk)
			rotate_stack(stack_a, 0);
		if ((*stack_a) && (*stack_a)->index < (chunk - (next_c / 2)))
			push_b(stack_a, stack_b);
		else if ((*stack_a) && (*stack_a)->index >= (chunk - (next_c / 2)))
			chunk_min(stack_a, stack_b, chunk);
		i++;
		if (i == chunk)
			chunk += next_c;
	}
}

void	diff_range_sort(t_list	**stack_a, t_list	**stack_b, int n, int f)
{
	int		chunk;

	chunk = 0;
	if (f == 1)
		chunk = n / 5;
	else if (f == 2)
		chunk = n / 9;
	sort_in_a(stack_a, stack_b, chunk);
	back_a(stack_a, stack_b);
}
