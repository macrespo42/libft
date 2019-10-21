/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:28:52 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/21 19:22:03 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i0;
	size_t i;
	size_t j;

	i = 0;
	i0 = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i0 < len)
	{
		while (haystack[i] && haystack[i] == needle[j] && (i0 + i) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char*)haystack + i - j);
			i++;
			j++;
		}
		i = 0;
		j = 0;
		haystack++;
		i0++;
	}
	return (NULL);
}
