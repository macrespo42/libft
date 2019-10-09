/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:38:46 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/09 11:01:13 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_words(const char *s, char c)
{
	int			i;
	int			words;

	i = 0;
	words = 0;
	if (s[0] != c)
		words++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static int		word_len(const char *s, int pos, char c)
{
	int			i;

	i = 0;
	while (s[pos] != c)
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
	if (!(strs = (char**)malloc(sizeof(char*) * nb_words(s, c))))
		return (NULL);
	k = 0;
	i = -1;
	while (++i < nb_words(s, c))
	{
		while (s[k] == c && s[k])
			k++;
		if (!(strs[i] = (char*)malloc(sizeof(char) * word_len(s, k, c) + 1)))
			return (NULL);
		j = 0;
		while (s[k] != c && s[k])
			strs[i][j++] = s[k++];
		strs[i][j] = '\0';
	}
	return (strs);
}
