/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:30:06 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/21 09:53:00 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos_c;

	pos_c = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			pos_c = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (pos_c > -1)
		return ((char *)s + pos_c);
	return (NULL);
}
