/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburlama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:14 by jburlama          #+#    #+#             */
/*   Updated: 2023/11/11 20:57:57 by jburlama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*buffer;
	char		*line;
	int			bytes_read;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = 1;
	if (!check_nl(str[fd]))
	{
		str[fd] = get_str(&str[fd], &buffer, &bytes_read, fd);
		if (str[fd] == NULL)
			return (NULL);
	}
	if (bytes_read == 0 && !(*str[fd]))
		return (free_all(&str[fd], NULL));
	line = fetch_line(&str[fd]);
	if (line == NULL)
		return (free_all(&str[fd], NULL));
	if (*str[fd] == '\0')
		free_all(&str[fd], NULL);
	return (line);
}

int	check_nl(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_calloc(int size)
{
	char	*str;
	int		i;

	str = malloc(size);
	if (str == NULL)
		return (str);
	i = 0;
	while (i < size)
		str[i++] = '\0';
	return (str);
}

char	*free_all(char **s1, char **s2)
{
	if (s1 != NULL)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (s2 != NULL)
	{
		free(*s2);
		*s2 = NULL;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
