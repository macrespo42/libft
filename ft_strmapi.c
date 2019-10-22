/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:32:32 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 12:07:47 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_new;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(s_new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
