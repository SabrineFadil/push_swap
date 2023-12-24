/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:49:58 by safadil           #+#    #+#             */
/*   Updated: 2023/12/16 20:49:58 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*creat_node(int numb)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->number = numb;
	node->next = NULL;
	return (node);
}

t_list	*last_node(t_list	*stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	addback_node(t_list **head, t_list *newnode)
{
	t_list	*temp;

	temp = *head;
	if (!*head)
	{
		*head = newnode;
		return ;
	}
	last_node(temp)->next = newnode;
	newnode->next = NULL;
}

int	size_stack(t_list *stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	get_position(t_list *stack, int number)
{
	int		position;
	t_list	*head;

	position = 0;
	head = stack;
	while (head != NULL)
	{
		if (head->number == number)
			return (position);
		position++;
		head = head->next;
	}
	return (-1);
}
