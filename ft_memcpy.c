/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:48:41 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/21 19:28:54 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_cp;
	unsigned char		*src_cp;

	if (!src && !dst)
		return (NULL);
	dst_cp = (unsigned char*)dst;
	src_cp = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_cp[i] = src_cp[i];
		i++;
	}
	return (dst_cp);
}
