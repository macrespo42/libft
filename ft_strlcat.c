/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:23:42 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/07 17:23:43 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		dest_size;
	size_t		src_size;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < dest_size)
		return (src_size + size);
	return (dest_size + src_size);
}
