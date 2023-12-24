/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:34:47 by safadil           #+#    #+#             */
/*   Updated: 2023/12/23 05:27:14 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char	*s1, char	*s2)
{
	int		i;
	int		j;
	int		ls1;
	int		ls2;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen (s1);
	ls2 = ft_strlen (s2);
	new = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		new[i] = s1[i];
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	return (new);
}
