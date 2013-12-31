/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcourtin <vcourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 18:23:09 by vcourtin          #+#    #+#             */
/*   Updated: 2013/12/07 18:23:11 by vcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	split(char **buff, char **rest, int *ifretline)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = (char*)malloc(ft_strlen(*buff));
	free(*rest);
	*rest = temp;
	while ((*buff)[i] != '\n' && (*buff)[i] != '\0')
		i++;
	if ((*buff)[i] == '\n')
	{
		*ifretline = 1;
		(*buff)[i++] = '\0';
	}
	while ((*buff)[i] != '\0')
		(*rest)[j++] = (*buff)[i++];
	if ((*buff)[i] == '\0')
		(*rest)[j] = '\0';
}

void	manager_buffer(char **buff, char **rest, char **line, int *ifretline)
{
		ft_strcpy(*buff, *rest);
		split(buff, rest, ifretline);
		ft_bzero(*line, ft_strlen(*line));
		*line = ft_strjoin(*line, *buff);
		free(*buff);
}

void	manager_read(char **buff, char **rest, char **line, int *ifretline)
{
		split(buff, rest, ifretline);
		*line = ft_strjoin(*line, *buff);
		free(*buff);
}

int		last_tring(char **rest, char **buff)
{
	*rest = "";
	free(*buff);
	return (1);
}

int		get_next_line(int const fd, char ** line)
{
	int				ret_read;
	char			*buff;
	static char		*rest = NULL;
	int				ifretline;

	ret_read = 0;
	ifretline = 0;
	if ((buff = (char*)malloc(512)) == NULL
		|| (*line = ft_memalloc(1)) == NULL)
			return (-1);
	if (!rest)
		rest = ft_memalloc(1);
	if (*rest != '\0' && ft_strchr(rest, '\n'))
	{
		manager_buffer(&buff, &rest, line, &ifretline);
		return (1);
	}
	while (ifretline == 0 && (ret_read = read(fd, buff, 512)))
	{
		buff[ret_read] = '\0';
		manager_read(&buff, &rest, line, &ifretline);
	}
	if (buff[0] == '\0' && rest[0] != '\0' && ret_read == 0)
		return (last_tring(&rest, &buff));
	return (ret_read = (*line[0] == '\0' ? 0 : 1));
}
