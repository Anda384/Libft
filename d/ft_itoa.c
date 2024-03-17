/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:07:44 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/16 17:01:25 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	normabs(int n, int i, char *r, int sign)
{
	while (n != 0)
	{
		r[i] = '0' + (sign * (n % 10));
		n = n / 10;
		i--;
	}
}

int	get_length(int n)
{
	int	length;

	length = 1;
	while ((n / 10) != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*allocate_memory(int length, int n)
{
	char	*r;

	r = (char *)malloc((length + 1) * sizeof(char));
	if (r == 0)
		return (0);
	if (n == 0)
	{
		r[0] = '0';
		r[1] = '\0';
	}
	return (r);
}

char	*ft_itoa(int n)
{
	int		length;
	int		sign;
	char	*r;
	int		i;

	length = get_length(n);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		length++;
	}
	r = allocate_memory(length, n);
	if (r == 0)
		return (r);
	i = length -1;
	normabs(n, i, r, sign);
	if (sign == -1)
		r[0] = '-';
	r[length] = '\0';
	return (r);
}
