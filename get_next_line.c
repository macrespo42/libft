/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:52:04 by macrespo          #+#    #+#             */
/*   Updated: 2019/10/31 09:37:56 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_stridup(const char *s1, int start)
{
	int			i;
	int			j;
	char		*s2;

	i = 0;
	j = start;
	while (s1[start])
	{
		start++;
		i++;
	}
	if (!(s2 = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s1[j])
		s2[i++] = s1[j++];
	s2[i] = '\0';
	return (s2);
}

static int		reader(char **fat_buffer, int fd, char *buffer)
{
	char	*tmp;
	int		ret;

	ret = 1;
	while (ret && !(ft_strchr(*fat_buffer, '\n')))
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == -1)
		{
			free(buffer);
			buffer = NULL;
			return (-1);
		}
		buffer[ret] = '\0';
		if (fd >= 0)
		{
			tmp = *fat_buffer;
			*fat_buffer = ft_strjoin(tmp, buffer);
			free(tmp);
		}
	}
	free(buffer);
	return (ret);
}

static char		*current_line(char **fat_buffer)
{
	char	*new_line;
	char	*tmp;
	int		i;

	tmp = ft_stridup(*fat_buffer, 0);
	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	new_line = ft_calloc(sizeof(char), i + 1);
	free(*fat_buffer);
	if (tmp[i] != '\0')
		*fat_buffer = ft_stridup(tmp, i + 1);
	i = 0;
	while (tmp[i] && tmp[i] != '\n')
	{
		new_line[i] = tmp[i];
		i++;
	}
	new_line[i] = '\0';
	free(tmp);
	return (new_line);
}

int				get_next_line(int fd, char **line)
{
	static char		*fat_buffer = NULL;
	char			*buffer;
	int				ret;

	if (fat_buffer == NULL)
		fat_buffer = ft_calloc(sizeof(char), 1);
	buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	ret = reader(&fat_buffer, fd, buffer);
	if (ret == -1 || fd < 0 || BUFFER_SIZE <= 0 || !line ||
		read(fd, buffer, 0) == -1 || fat_buffer == NULL)
	{
		free(fat_buffer);
		fat_buffer = NULL;
		return (-1);
	}
	*line = current_line(&fat_buffer);
	if (ret == 0)
	{
		fat_buffer = NULL;
		return (0);
	}
	return (1);
}
