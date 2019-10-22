/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:59:09 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/22 10:30:57 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	int			i;
	int			j;
	int			size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(s3 = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
