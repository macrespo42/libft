/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:00:06 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/07 21:03:39 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*s_cp;

	s_cp = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (s_cp[i] == (unsigned char)c)
			return (s_cp + i);
		i++;
	}
	return (NULL);
}
