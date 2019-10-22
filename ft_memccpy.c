/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:38:40 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 09:44:29 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst_cp;
	unsigned char		*src_cp;

	dst_cp = (unsigned char*)dst;
	src_cp = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_cp[i] = src_cp[i];
		if (src_cp[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
