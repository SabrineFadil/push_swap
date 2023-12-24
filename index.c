/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:02 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 01:23:19 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	return_min_index(t_list *stack)
{
	int		min_value;
	t_list	*temp;

	min_value = INT_MAX;
	temp = stack;
	while (temp != NULL)
	{
		if (temp->index == -1 && temp->number < min_value)
			min_value = temp->number;
		temp = temp->next;
	}
	return (min_value);
}

void	reset_index(t_list *stack)
{
	while (stack != NULL)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

void	put_index_to_node(t_list *stack)
{
	int		index;
	t_list	*temp;
	int		size;

	index = 0;
	size = size_stack(stack);
	reset_index(stack);
	while (size != 0)
	{
		temp = stack;
		while (temp != NULL)
		{
			if (temp->number == return_min_index(stack))
			{
				temp->index = index;
				index++;
				size--;
				break ;
			}
			temp = temp->next;
		}
	}
}
