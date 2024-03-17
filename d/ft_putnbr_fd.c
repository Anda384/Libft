/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:32:31 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/15 17:30:18 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	int		length;
	char	str[12];

	sign = (n < 0);
	length = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = n / 10;
	}
	if (sign)
		str[length++] = '-';
	while (length > 0)
		write(fd, &str[--length], 1);
}
