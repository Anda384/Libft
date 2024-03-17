/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:59:24 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/16 16:44:07 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
			return (cmp_char(s1[i], s2[i]));
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0')
			return (cmp_char(s1[i], s2[i]));
		else
			return (cmp_char(s1[i], '\0') - cmp_char(s2[i], '\0'));
	}
	return (0);
}
