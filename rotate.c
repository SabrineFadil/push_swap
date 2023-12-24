/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 01:03:14 by safadil           #+#    #+#             */
/*   Updated: 2023/12/24 01:03:14 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_list	**stack, int count)
{
	t_list	*head;
	t_list	*temp;

	if (*stack == NULL || size_stack(*stack) < 2)
		return ;
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = head;
	if (count == 0)
		ft_printf("ra\n");
	if (count == 1)
		ft_printf("rb\n");
}

void	rrotate_stack(t_list	**stack, int count)
{
	t_list	*new;
	t_list	*last;

	if (*stack == NULL || size_stack(*stack) < 2)
		return ;
	new = *stack;
	while ((new->next)->next)
	{
		if (new->next->next == NULL)
			break ;
		new = new->next;
	}
	last = new->next;
	new->next = NULL;
	last->next = *stack;
	*stack = last;
	if (count == 0)
		ft_printf("rra\n");
	if (count == 1)
		ft_printf("rrb\n");
}

void	rr(t_list	**stack_a, t_list **stack_b)
{
	rotate_stack(stack_a, 2);
	(void)stack_b;
	rotate_stack(stack_b, 2);
	ft_printf("rr\n");
}

void	rrr(t_list	**stack_a, t_list **stack_b)
{
	rrotate_stack(stack_a, 2);
	rrotate_stack(stack_b, 2);
	ft_printf("rrr\n");
}
