/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:47:28 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 05:23:20 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_stack(t_list *stack)
{
	t_list	*temp;
	t_list	*temp2;

	temp = stack;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->number > temp2->number)
				return (0);
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	return (1);
}

int	max_value(t_list	*stack)
{
	int		max_value;
	t_list	*tmp;

	max_value = stack->number;
	tmp = stack->next;
	while (tmp)
	{
		if (tmp->number > max_value)
			max_value = tmp->number;
		tmp = tmp->next;
	}
	return (max_value);
}

int	min_value(t_list	*stack)
{
	int		min_value;
	t_list	*head;

	head = stack;
	min_value = stack->number;
	while (head)
	{
		if (head->number < min_value)
			min_value = head->number;
		head = head->next;
	}
	return (min_value);
}

void	sort_all(t_list	**stack_a, t_list	**stack_b)
{
	int	size;

	size = size_stack(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->number > (*stack_a)->next->number)
			swap_2(stack_a, 0);
	}
	else if (size == 3)
		sort_3(stack_a);
	else if (size >= 4 && size < 30)
	{
		sort_5(stack_a, stack_b);
	}
	else if (size >= 30 && size <= 200)
	{
		diff_range_sort(stack_a, stack_b, size, 1);
	}
	else
	{
		diff_range_sort(stack_a, stack_b, size, 2);
	}
}
