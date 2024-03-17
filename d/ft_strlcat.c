/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:31:43 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/15 17:44:50 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	j = dst_l;
	i = 0;
	if (dst_l < size - 1 && size > 0)
	{
		while (src[i] && dst_l + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_l >= size)
		dst_l = size;
	return (dst_l + src_l);
}
