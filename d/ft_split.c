/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pphanitc <pphanitc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:55:18 by pphanitc          #+#    #+#             */
/*   Updated: 2024/03/17 18:04:10 by pphanitc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			total++;
		}
	}
	return (total);
}

char	**ft_allocate_mem(int count)
{
	char	**split;

	split = (char **)malloc((count +1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (split);
}

void	ft_free_split(char **s)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			free(s[i]);
			i++;
		}
		free(s);
	}
}

char	**ft_fill_substr(char **split, const char *s, char c, int count)
{
	int		index;
	char	*start;
	char	*end;

	index = 0;
	while (index < count)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while ((*s) && (*s != c))
			s++;
		end = (char *)s;
		split[index] = (char *)malloc(end - start + 1);
		if (!split[index])
		{
			ft_free_split(split);
			return (NULL);
		}
		ft_memcpy(split[index], start, end - start);
		split[index][end - start] = '\0';
		index++;
	}
	split[index] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;

	if (!s)
		return (NULL);
	count = ft_word_count(s, c);
	split = ft_allocate_mem(count);
	if (!split)
	{
		ft_free_split(split);
		return (NULL);
	}
	return (ft_fill_substr(split, s, c, count));
}
