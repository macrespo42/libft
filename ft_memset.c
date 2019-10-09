/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:42:20 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/07 18:49:16 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*void_ptr;

	void_ptr = b;
	i = 0;
	while (i < len)
	{
		void_ptr[i] = c;
		i++;
	}
	return (void_ptr);
}
