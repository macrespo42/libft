/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:52:00 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/07 21:05:17 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_cp;
	unsigned char		*src_cp;

	dest_cp = (unsigned char*)dest;
	src_cp = (unsigned char*)src;
	i = 0;
	if (src_cp < dest_cp)
	{
		n--;
		while (n + 1 > 0)
		{
			dest_cp[n] = src_cp[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest_cp[i] = src_cp[i];
			i++;
		}
	}
	return (dest);
}
