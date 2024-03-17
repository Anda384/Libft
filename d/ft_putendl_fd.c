/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:20:55 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/13 17:26:42 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}
