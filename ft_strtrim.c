/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:27:39 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/09 11:00:12 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		start_set(char const *s1, char const *set)
{
	int		i;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	return (i);
}

static int		end_set(char const *s1, char const *set)
{
	int		i;
	int		end;

	i = ft_strlen(s1) - 1;
	end = 0;
	while (i > 0 && is_in_set(s1[i], set))
	{
		end++;
		i--;
	}
	return (end);
}

static int		end_pos(char const *s1, char const *set)
{
	int		i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && is_in_set(s1[i], set))
		i--;
	return (i + 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			start_pos;
	int			size_alloc;
	char		*s2;

	if (!s1 || !set)
		return (NULL);
	start_pos = start_set(s1, set);
	size_alloc = ft_strlen(s1) - (start_set(s1, set) + end_set(s1, set));
	if (!(s2 = (char*)malloc(sizeof(char) * size_alloc + 1)))
		return (NULL);
	i = 0;
	while (start_pos < end_pos(s1, set))
	{
		s2[i] = s1[start_pos];
		i++;
		start_pos++;
	}
	s2[i] = '\0';
	return (s2);
}
