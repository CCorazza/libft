/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorazza <ccorazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:03:08 by ccorazza          #+#    #+#             */
/*   Updated: 2014/05/18 09:14:23 by ccorazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static char		*ft_nstrchr(char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return (s);
		s++;
	}
	return (NULL);
}

static char		*ft_joinbuffs(char *s1, char *s2)
{
	char		*ret;
	char		*tmp;
	int			len;

	tmp = s1;
	while (*tmp)
		tmp++;
	ret = s2;
	while (*ret)
		ret++;
	len = ret - s2;
	if (!(ret = (char *)malloc(sizeof(char) * (1 + len + tmp - s1))))
		return (NULL);
	ret[len + (tmp - s1)] = '\0';
	tmp = ret;
	while ((*tmp = *(s1++)))
		tmp++;
	while ((*tmp = *(s2++)))
		tmp++;
	return (ret);
}

static int		last_line(char **line, char **buf)
{
	if (**buf)
	{
		*line = *buf;
		*buf = NULL;
		return (1);
	}
	return (0);
}

static int		next_line(int fd, char **line, char **buf)
{
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		if (ret == -1)
			return (-1);
		if ((tmp = ft_nstrchr(buffer)))
		{
			*tmp = '\0';
			if ((*line = ft_joinbuffs(*buf, buffer)) == NULL
				|| (tmp = ft_joinbuffs(tmp + 1, "\0")) == NULL)
				return (-1);
			free(*buf);
			*buf = tmp;
			return (1);
		}
		if ((tmp = ft_joinbuffs(*buf, buffer)) == NULL)
			return (-1);
		free(*buf);
		*buf = tmp;
	}
	return (last_line(line, buf));
}

int				get_next_line(int fd, char **line)
{
	static char	*buf;
	char		*tmp;

	if (buf)
	{
		if ((tmp = ft_nstrchr(buf)))
		{
			*tmp = '\0';
			if ((*line = ft_joinbuffs(buf, "\0")) == NULL
				|| (tmp = ft_joinbuffs(tmp + 1, "\0")) == NULL)
				return (-1);
			free(buf);
			buf = tmp;
			return (1);
		}
	}
	else
	{
		if ((buf = (char *)malloc(sizeof(char))) == NULL)
			return (-1);
		*buf = '\0';
	}
	return (next_line(fd, line, &buf));
}
