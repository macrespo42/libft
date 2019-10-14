/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:05:15 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/14 10:30:41 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_s;
	int			i;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s) || ft_strlen(s) == 0)
		return ("\0");
	if (!(new_s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s[start] && i < (int)len)
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
