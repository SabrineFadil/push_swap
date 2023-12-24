/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safadil <safadil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:26:14 by safadil           #+#    #+#             */
/*   Updated: 2023/12/23 07:24:33 by safadil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char	*s, unsigned int start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start + 1;
	new = (char *)malloc(sizeof (char) * (len + 1));
	if (!new)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			new[j] = s[i];
			j++;
		}
	}
	new[j] = '\0';
	return (new);
}
