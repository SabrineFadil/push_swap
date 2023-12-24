/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 05:48:37 by safadil           #+#    #+#             */
/*   Updated: 2023/12/23 05:48:37 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack, int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->number = value;
	new_node->next = *stack;
	*stack = new_node;
}

int	pop(t_list	**stack)
{
	int		value;
	t_list	*temp;

	if (*stack == NULL)
		return (0);
	value = (*stack)->number;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	return (value);
}

void	push_b(t_list	**stack_a, t_list	**stack_b)
{
	int	value;

	if (*stack_a == NULL)
		return ;
	value = pop(stack_a);
	push(stack_b, value);
	ft_printf("pb\n");
}

void	push_a(t_list	**stack_a, t_list	**stack_b)
{
	int	value;

	if (*stack_b == NULL)
		return ;
	value = pop(stack_b);
	push(stack_a, value);
	ft_printf("pa\n");
}
