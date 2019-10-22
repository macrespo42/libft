/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:52:00 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 09:43:57 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_cp;
	unsigned char	*src_cp;
	unsigned char	temp[len];

	i = 0;
	if (!dst && !src)
		return (NULL);
	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	while (i < len)
	{
		temp[i] = src_cp[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_cp[i] = temp[i];
		i++;
	}
	return (dst);
}
