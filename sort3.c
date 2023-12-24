/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:40:04 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 00:53:48 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (head->number == max_value(head))
	{
		rotate_stack(stack, 0);
		head = *stack;
	}
	else if (head->next->number == max_value(head))
	{
		swap_2(stack, 0);
		rotate_stack(stack, 0);
		head = *stack;
	}
	if (head->number > head->next->number)
	{
		swap_2(stack, 0);
	}
}
