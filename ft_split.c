/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:38:46 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/27 17:02:12 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static int		word_len(const char *s, int pos, char c)
{
	int			i;

	i = 0;
	while (s[pos] != c && s[pos])
	{
		pos++;
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	int			k;
	char		**strs;

	if (!s)
		return (NULL);
	if (!(strs = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	k = 0;
	i = -1;
	while (++i < (int)count_words(s, c))
	{
		while (s[k] && s[k] == c)
			k++;
		if (!(strs[i] = (char*)malloc(sizeof(char) * word_len(s, k, c) + 1)))
			return (NULL);
		j = 0;
		while (s[k] != c && s[k])
			strs[i][j++] = s[k++];
		strs[i][j] = '\0';
	}
	strs[i] = NULL;
	return (strs);
}
