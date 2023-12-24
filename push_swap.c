/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:20:20 by safadil           #+#    #+#             */
/*   Updated: 2023/12/20 23:20:20 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	*str;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac <= 1)
		exit(1);
	str = joinarguments(ac, av);
	parce(str, &stack_a);
	free(str);
	put_index_to_node(stack_a);
	if (sort_stack(stack_a) == 1)
		exit (1);
	sort_all(&stack_a, &stack_b);
	return (0);
}
